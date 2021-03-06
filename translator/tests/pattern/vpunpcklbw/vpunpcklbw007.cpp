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

    inputPredReg[1] = (1 << 0);
    inputPredReg[2] = (1 << 0) | (1 << 1) | (1 << 4); /* x86_64 */
    //(1 << 0) | (1 << 8) | (uint64_t(1) << 32);  /* aarch64 */
    inputPredReg[3] = (1 << 0) | (1 << 1) | (uint64_t(1) << 20) |
                      (uint64_t(1) << 28); /* x86_64 */
    //                      (1 << 0) | (1 << 8) | (1 << 16) |
    //                (uint64_t(1) << 32); /* aarch64 */
    inputPredReg[4] = (1 << 0) | (1 << 1) | (1 << 2) | (uint64_t(1) << 30) |
                      (uint64_t(1) << 31); /* x86_64 */
    //                      (1 << 0) | (1 << 8) | (1 << 16) | (1 << 24) |
    //              (uint64_t(1) << 32); /* aarch64 */

    inputPredReg[5] = (1 << 0) | (1 << 1) | (uint64_t(1) << 25) |
                      (uint64_t(1) << 29) | (uint64_t(1) << 50) |
                      (uint64_t(1) << 60); /* x86_64 */
    //       (1 << 0) | (1 << 8) | (1 << 16) | (1 << 24) |
    //              (uint64_t(1) << 32) | (uint64_t(1) << 48); /* aarch64 */
    inputPredReg[6] = (1 << 0) | (1 << 1) | (uint64_t(1) << 22) |
                      (uint64_t(1) << 27) | (uint64_t(1) << 53) |
                      (uint64_t(1) << 57) | (uint64_t(1) << 62); /* x86_64 */
    //       (1 << 0) | (1 << 8) | (1 << 16) | (1 << 24) |
    //              (uint64_t(1) << 32) | (uint64_t(1) << 48) |
    //              (uint64_t(1) << 56); /* aarch64 */
    inputPredReg[7] = ~uint64_t(0);
  }

  void setCheckRegFlagAll() {
    /* Here modify arrays of checkGenRegMode, checkPredRegMode, checkZRegMode */
  }

  void genJitTestCode() {
    /* Here write JIT code with x86_64 mnemonic function to be tested. */
    vpunpcklbw(Zmm(1) | k1, Zmm(30), Zmm(31));
    vpunpcklbw(Zmm(2) | k2, Zmm(30), Zmm(30));
    vpunpcklbw(Zmm(3) | k3, Zmm(3), Zmm(31));
    vpunpcklbw(Zmm(4) | k4, Zmm(30), Zmm(4));
    vpunpcklbw(Zmm(5) | k5, Zmm(5), Zmm(5));
    vpunpcklbw(Zmm(6) | k6, Zmm(30), Zmm(31));
    vpunpcklbw(Zmm(7) | k7, Zmm(30), Zmm(31));
    /*
    vpunpcklbw(Zmm(8) | k1, Zmm(8), Zmm(31));
    vpunpcklbw(Zmm(9) | k2, Zmm(9), Zmm(31));
    vpunpcklbw(Zmm(10) | k3, Zmm(10), Zmm(31));
    vpunpcklbw(Zmm(11) | k4, Zmm(11), Zmm(31));
    vpunpcklbw(Zmm(12) | k5, Zmm(12), Zmm(31));
    vpunpcklbw(Zmm(13) | k6, Zmm(13), Zmm(31));
    vpunpcklbw(Zmm(14) | k7, Zmm(14), Zmm(31));

    vpunpcklbw(Zmm(15) | k1, Zmm(30), Zmm(15));
    vpunpcklbw(Zmm(16) | k2, Zmm(30), Zmm(16));
    vpunpcklbw(Zmm(17) | k3, Zmm(30), Zmm(17));
    vpunpcklbw(Zmm(18) | k4, Zmm(30), Zmm(18));
    vpunpcklbw(Zmm(19) | k5, Zmm(30), Zmm(19));
    vpunpcklbw(Zmm(20) | k6, Zmm(30), Zmm(20));
    vpunpcklbw(Zmm(21) | k7, Zmm(30), Zmm(21));
    */
    vpunpcklbw(Zmm(22) | k1, Zmm(20), Zmm(21));
    vpunpcklbw(Zmm(23) | k2, Zmm(23), Zmm(20));
    vpunpcklbw(Zmm(24) | k3, Zmm(20), Zmm(24));
    vpunpcklbw(Zmm(25) | k4, Zmm(20), Zmm(20));
    vpunpcklbw(Zmm(26) | k5, Zmm(26), Zmm(26));
    vpunpcklbw(Zmm(27) | k6, Zmm(27), Zmm(27));
    vpunpcklbw(Zmm(28) | k7, Zmm(28), Zmm(28));
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
