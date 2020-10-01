/*******************************************************************************
 * Copyright 2020 FUJITSU LIMITED
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *******************************************************************************/
#include "test_generator2.h"

class TestPtnGenerator : public TestGenerator {
public:
  void setInitialRegValue() {
    /* Here modify arrays of inputGenReg, inputPredReg, inputZReg */
    setInputZregAllRandomHex();

    inputGenReg[8] = 0xabcdef012;
    inputGenReg[9] = 0x123456789a;
    inputGenReg[10] = 0x56789abcdef;

    inputPredReg[1] = uint64_t(0); /* Both x86_64 and aarch64 */
#ifndef __ARM_ARCH
    inputPredReg[2] = (1 << 0) | (1 << 4) | (1 << 8) | (1 << 12);
    inputPredReg[3] = (1 << 2) | (1 << 6) | (1 << 10) | (1 << 14);
    inputPredReg[4] = (1 << 3) | (1 << 7) | (1 << 11) | (1 << 15);
#else
    inputPredReg[2] =
        (1 << 0) | (1 << 16) | (uint64_t(1) << 32) | (uint64_t(1) << 48);
    inputPredReg[3] =
        (1 << 8) | (1 << 24) | (uint64_t(1) << 40) | (uint64_t(1) << 56);
    inputPredReg[4] =
        (1 << 12) | (1 << 28) | (uint64_t(1) << 44) | (uint64_t(1) << 60);
#endif
    inputPredReg[7] = ~uint64_t(0); /* Both x86_64 and aarch64 */
  }

  void setCheckRegFlagAll() {
    /* Here modify arrays of checkGenRegMode, checkPredRegMode, checkZRegMode */
  }

  void genJitTestCode() {
    /* Here write JIT code with x86_64 mnemonic function to be tested. */
    vpbroadcastd(Xmm(0) | k1, Xmm(31));
    vpbroadcastd(Ymm(1) | k1, Xmm(30));
    vpbroadcastd(Zmm(2) | k1, Xmm(29));
    vpbroadcastd(Xmm(3) | k2, Xmm(28));
    vpbroadcastd(Ymm(4) | k3, Xmm(27));
    vpbroadcastd(Zmm(5) | k4, Xmm(26));
    vpbroadcastd(Xmm(6) | k7, Xmm(25));
    vpbroadcastd(Ymm(7) | k7, Xmm(24));
    vpbroadcastd(Zmm(8) | k7, Xmm(23));
    vpbroadcastd(Xmm(9) | k1, r8d);
    vpbroadcastd(Ymm(10) | k1, r9d);
    vpbroadcastd(Zmm(11) | k1, r10d);
    vpbroadcastd(Xmm(12) | k4, r8d);
    vpbroadcastd(Ymm(13) | k2, r9d);
    vpbroadcastd(Zmm(14) | k3, r10d);
    vpbroadcastd(Xmm(15) | k7, r8d);
    vpbroadcastd(Ymm(16) | k7, r9d);
    vpbroadcastd(Zmm(17) | k7, r10d);

    mov(rax, 0x1);
#ifndef __ARM_ARCH
    kmovq(k2, rax);
    kmovq(k3, rax);
    kmovq(k4, rax);
#else
    ptrue(p2.b, Xbyak_aarch64::VL1);
    ptrue(p3.b, Xbyak_aarch64::VL1);
    ptrue(p4.b, Xbyak_aarch64::VL1);
#endif
  }
};

int main(int argc, char *argv[]) {
  /* Initializing arrays of inputData, inputGenReg, inputPredReg, inputZReg,
   * checkGenRegMode, checkPredRegMode,checkZRegMode */
  TestPtnGenerator gen;

  /* Set bool output_jit_on_, bool exec_jit_on_ = 0; */
  gen.parseArgs(argc, argv);

  /* Generate JIT code and get function pointer */
  void (*f)();
  if (gen.isOutputJitOn()) {
    f = (void (*)())gen.gen();
  }

  /* Dump generated JIT code to a binary file */
  gen.dumpJitCode();

  /* 1:Execute JIT code, 2:dump all register values, 3:dump register values to
   * be checked */
  if (gen.isExecJitOn()) {
    /* Before executing JIT code, dump inputData, inputGenReg, inputPredReg,
     * inputZReg. */
    gen.dumpInputReg();
    f();                 /* Execute JIT code */
    gen.dumpOutputReg(); /* Dump all register values */
    gen.dumpCheckReg();  /* Dump register values to be checked */
  }

  return 0;
}
