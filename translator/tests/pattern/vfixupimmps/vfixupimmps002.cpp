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
    setDumpZRegMode(SP_DT);
    setInputZregAllRandomHex();
    for (int i = 0; i < 16; i++) {
      inputZReg[15].us_dt[i] = (7 << 28) | (6 << 24) | (5 << 20) | (4 << 16) |
                               (3 << 12) | (2 << 8) | (1 << 4) | (0 << 0);
    }

    for (int i = 0; i < 14; i++) {
      inputZReg[i].us_dt[0] = uint32_t(0x7f800001); // SNaN
      inputZReg[i].us_dt[1] = uint32_t(0x7fc00001); // QNaN
      inputZReg[i].sp_dt[2] = float(0.0);           // zero
      inputZReg[i].sp_dt[3] = float(1.0);           // pos_one
      inputZReg[i].us_dt[4] = uint32_t(0x7f800000); // neg_inf
      inputZReg[i].us_dt[5] = uint32_t(0xff800000); // pos_inf
      inputZReg[i].sp_dt[6] = float(-123.45);       // neg_value
      inputZReg[i].sp_dt[7] = float(123.45);        // pos_value
      inputZReg[i].us_dt[8] = uint32_t(0x00000001);
      inputZReg[i].us_dt[9] = uint32_t(0x80000001);
      inputZReg[i].us_dt[10] = uint32_t(0x7f800000);
      inputZReg[i].us_dt[11] = uint32_t(0xff800000);
      inputZReg[i].us_dt[12] = uint32_t(0xff800001); // SNaN
      inputZReg[i].us_dt[13] = uint32_t(0xffc00001); // QNaN
    }
  }

  void setCheckRegFlagAll() {
    /* Here modify arrays of checkGenRegMode, checkPredRegMode, checkZRegMode */
  }

  void genJitTestCode() {
    vfixupimmps(Zmm(16), Zmm(0), Zmm(15), 0);
    vfixupimmps(Zmm(17), Zmm(1), Zmm(15), 0);
    vfixupimmps(Zmm(18), Zmm(2), Zmm(15), 0);
    vfixupimmps(Zmm(19), Zmm(3), Zmm(15), 0);
    vfixupimmps(Zmm(20), Zmm(4), Zmm(15), 0);
    vfixupimmps(Zmm(21), Zmm(5), Zmm(15), 0);
    vfixupimmps(Zmm(22), Zmm(6), Zmm(15), 0);
    vfixupimmps(Zmm(23), Zmm(7), Zmm(15), 0);
    vfixupimmps(Zmm(24), Zmm(8), Zmm(15), 0);
    vfixupimmps(Zmm(25), Zmm(9), Zmm(15), 0);
    vfixupimmps(Zmm(26), Zmm(10), Zmm(15), 0);
    vfixupimmps(Zmm(27), Zmm(11), Zmm(15), 0);
    vfixupimmps(Zmm(28), Zmm(12), Zmm(15), 0);
    vfixupimmps(Zmm(29), Zmm(13), Zmm(15), 0);
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
