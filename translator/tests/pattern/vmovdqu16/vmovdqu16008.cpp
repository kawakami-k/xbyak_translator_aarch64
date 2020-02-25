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
    /* elemet is 8 bits.
       Xmm:16 elements
       Ymm:32 elements
       Zmm:64 elements */

    // Xmm range
    inputPredReg[1] = (1 << 0) | (1 << 17) /* x86_64 */
      | (1 << 0) | (uint64_t(1) << 34); /* aarch64 */

    inputPredReg[2] = (1 << 0) | (1 << 17) | (1 << 19) |
      (1 << 25) /* x86_64 */
      | (1 << 0) | (uint64_t(1) << 34) | (uint64_t(1) << 38) | (uint64_t(1) << 50); /* aarch64 */

    // Ymm range
    inputPredReg[3] =
      (1 << 0) | (1 << 17) | (1 << 23) /* x86_64 */
      | (1 << 0) | (uint64_t(1) << 34) | (uint64_t(1) << 46); /* aarch64 */
    inputPredReg[4] = (1 << 0) | (1 << 17) | (1 << 23) |
      (uint64_t(1) << 31) /* x86_64 */
      | (1 << 0) | (uint64_t(1) << 34) | (uint64_t(1) << 46) | (uint64_t(1) << 62); /* aarch64 */

    // Zmm range
    inputPredReg[5] = (1 << 0) | (1 << 17) | (1 << 23) |
      (uint64_t(1) << 31) /* x86_64 */
      | (1 << 0) | (uint64_t(1) << 34) | (uint64_t(1) << 46) | (uint64_t(1) << 62); /* aarch64 */
    inputPredReg[6] = (1 << 0) | (1 << 17) | (1 << 23) | (uint64_t(1) << 29) | (uint64_t(1) << 31) /* x86_64 */
      | (1 << 0) | (uint64_t(1) << 34) | (uint64_t(1) << 46) | (uint64_t(1) << 58) | (uint64_t(1) << 62); /* aarch64 */

    inputPredReg[7] = ~uint64_t(0);
	
  }

  void setCheckRegFlagAll() {
    /* Here modify arrays of checkGenRegMode, checkPredRegMode, checkZRegMode */
  }

  void genJitTestCode() {
    /* Here write JIT code with x86_64 mnemonic function to be tested. */
    vmovdqu16(Ymm(0) | k1, Ymm(1));
    vmovdqu16(Ymm(2) | k2, Ymm(3));
    vmovdqu16(Ymm(4) | k3, Ymm(5));
    vmovdqu16(Ymm(6) | k4, Ymm(7));
    vmovdqu16(Ymm(8) | k5, Ymm(9));
    vmovdqu16(Ymm(10) | k6, Ymm(11));
    vmovdqu16(Ymm(12) | k7, Ymm(13));

    vmovdqu16(Ymm(14) | k1, Ymm(14));
    vmovdqu16(Ymm(15) | k2, Ymm(15));
    vmovdqu16(Ymm(16) | k3, Ymm(16));
    vmovdqu16(Ymm(17) | k4, Ymm(17));
    vmovdqu16(Ymm(18) | k5, Ymm(18));
    vmovdqu16(Ymm(19) | k6, Ymm(19));
    vmovdqu16(Ymm(20) | k7, Ymm(20));
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
