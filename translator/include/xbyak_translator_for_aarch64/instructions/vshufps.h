void translateVSHUFPS(xed_decoded_inst_t *p) {
  namespace xa = Xbyak_aarch64;
  struct xt_a64fx_operands_struct_t a64;
  xt_construct_a64fx_operands(p, &a64);

  /* 2020/03/17 17:18 */
  /* Col=S103*/
  if (false ||
      (a64.dstWidth == 128 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true) ||
      (a64.dstWidth == 128 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_MEM && true) ||
      (a64.dstWidth == 256 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_MEM && true) ||
      (a64.dstWidth == 128 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true) ||
      (a64.dstWidth == 128 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_MEM && true) ||
      (a64.dstWidth == 128 && a64.PredType == A64_PRED_NO && a64.EVEXb == 1 &&
       a64.src2Type == A64_OP_MEM && true) ||
      (a64.dstWidth == 128 && a64.PredType == A64_PRED_ZERO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true) ||
      (a64.dstWidth == 128 && a64.PredType == A64_PRED_ZERO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_MEM && true) ||
      (a64.dstWidth == 128 && a64.PredType == A64_PRED_ZERO && a64.EVEXb == 1 &&
       a64.src2Type == A64_OP_MEM && true) ||
      (a64.dstWidth == 128 && a64.PredType == A64_PRED_MERG && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true) ||
      (a64.dstWidth == 128 && a64.PredType == A64_PRED_MERG && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_MEM && true) ||
      (a64.dstWidth == 128 && a64.PredType == A64_PRED_MERG && a64.EVEXb == 1 &&
       a64.src2Type == A64_OP_MEM && true) ||
      (a64.dstWidth == 256 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_MEM && true) ||
      (a64.dstWidth == 256 && a64.PredType == A64_PRED_NO && a64.EVEXb == 1 &&
       a64.src2Type == A64_OP_MEM && true) ||
      (a64.dstWidth == 256 && a64.PredType == A64_PRED_ZERO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true) ||
      (a64.dstWidth == 256 && a64.PredType == A64_PRED_ZERO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_MEM && true) ||
      (a64.dstWidth == 256 && a64.PredType == A64_PRED_ZERO && a64.EVEXb == 1 &&
       a64.src2Type == A64_OP_MEM && true) ||
      (a64.dstWidth == 256 && a64.PredType == A64_PRED_MERG && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true) ||
      (a64.dstWidth == 256 && a64.PredType == A64_PRED_MERG && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_MEM && true) ||
      (a64.dstWidth == 256 && a64.PredType == A64_PRED_MERG && a64.EVEXb == 1 &&
       a64.src2Type == A64_OP_MEM && true) ||
      (a64.dstWidth == 512 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_MEM && true) ||
      (a64.dstWidth == 512 && a64.PredType == A64_PRED_NO && a64.EVEXb == 1 &&
       a64.src2Type == A64_OP_MEM && true) ||
      (a64.dstWidth == 512 && a64.PredType == A64_PRED_ZERO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true) ||
      (a64.dstWidth == 512 && a64.PredType == A64_PRED_ZERO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_MEM && true) ||
      (a64.dstWidth == 512 && a64.PredType == A64_PRED_ZERO && a64.EVEXb == 1 &&
       a64.src2Type == A64_OP_MEM && true) ||
      (a64.dstWidth == 512 && a64.PredType == A64_PRED_MERG && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true) ||
      (a64.dstWidth == 512 && a64.PredType == A64_PRED_MERG && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_MEM && true) ||
      (a64.dstWidth == 512 && a64.PredType == A64_PRED_MERG && a64.EVEXb == 1 &&
       a64.src2Type == A64_OP_MEM && true)) {
    XT_UNIMPLEMENTED;
  }

  /* Col=U103*/
  if (false ||
      (a64.dstWidth == 256 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true) ||
      (a64.dstWidth == 512 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true)) {
    a64.zTmpIdx = xt_push_zreg(&a64);
  }
  /* Col=V103*/
  if (false ||
      (a64.dstWidth == 256 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true) ||
      (a64.dstWidth == 512 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true)) {
    a64.pTmpIdx = xt_push_preg(&a64);
  }

  /* Col=X103*/
  if (false ||
      (a64.dstWidth == 256 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true) ||
      (a64.dstWidth == 512 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true)) {
    CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(15),
                              xa::ZReg(a64.srcIdx).s);
    if ((a64.uimm & 0x3) == 1) {
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                4);
    }
    if ((a64.uimm & 0x3) == 2) {
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                8);
    }
    if ((a64.uimm & 0x3) == 3) {
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                12);
    }
  }
  /* Col=Y103*/
  if (false ||
      (a64.dstWidth == 256 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true) ||
      (a64.dstWidth == 512 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true)) {
    if (((a64.uimm & 0xc) / 4) == 0) {
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                4);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.srcIdx),
                                60);
    }
    if (((a64.uimm & 0xc) / 4) == 1) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.srcIdx).s);
    }
    if (((a64.uimm & 0xc) / 4) == 2) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(14));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                60);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.srcIdx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                4);
    }
    if (((a64.uimm & 0xc) / 4) == 3) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                56);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.srcIdx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                8);
    }
  }
  /* Col=Z103*/
  if (false ||
      (a64.dstWidth == 256 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true) ||
      (a64.dstWidth == 512 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true)) {
    if (((a64.uimm & 0x30) / 16) == 0) {
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                8);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.src2Idx),
                                56);
    }
    if (((a64.uimm & 0x30) / 16) == 1) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(15),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                4);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                60);
    }
    if (((a64.uimm & 0x30) / 16) == 2) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
    }
    if (((a64.uimm & 0x30) / 16) == 3) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                60);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                4);
    }
  }
  /* Col=AA103*/
  if (false ||
      (a64.dstWidth == 256 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true) ||
      (a64.dstWidth == 512 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true)) {
    if (((a64.uimm & 0xc0) / 64) == 0) {
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                12);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.src2Idx),
                                52);
    }
    if (((a64.uimm & 0xc0) / 64) == 1) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(15),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                8);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                56);
    }
    if (((a64.uimm & 0xc0) / 64) == 2) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                4);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                60);
    }
    if (((a64.uimm & 0xc0) / 64) == 3) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
    }
  }
  /* Col=AB103*/
  if (false ||
      (a64.dstWidth == 256 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true) ||
      (a64.dstWidth == 512 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true)) {
    if ((a64.uimm & 0x3) == 0) {
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(14),
                                xa::ZReg(a64.srcIdx).s);
    }
    if ((a64.uimm & 0x3) == 1) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                60);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.srcIdx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                4);
    }
    if ((a64.uimm & 0x3) == 2) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                56);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.srcIdx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                8);
    }
    if ((a64.uimm & 0x3) == 3) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                52);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.srcIdx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                12);
    }
  }
  /* Col=AC103*/
  if (false ||
      (a64.dstWidth == 256 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true) ||
      (a64.dstWidth == 512 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true)) {
    if (((a64.uimm & 0xc) / 4) == 0) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                4);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.srcIdx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                60);
    }
    if (((a64.uimm & 0xc) / 4) == 1) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.srcIdx).s);
    }
    if (((a64.uimm & 0xc) / 4) == 2) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                60);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.srcIdx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                4);
    }
    if (((a64.uimm & 0xc) / 4) == 3) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                56);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.srcIdx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                8);
    }
  }
  /* Col=AD103*/
  if (false ||
      (a64.dstWidth == 256 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true) ||
      (a64.dstWidth == 512 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true)) {
    if (((a64.uimm & 0x30) / 16) == 0) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                8);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                56);
    }
    if (((a64.uimm & 0x30) / 16) == 1) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                4);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                60);
    }
    if (((a64.uimm & 0x30) / 16) == 2) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
    }
    if (((a64.uimm & 0x30) / 16) == 3) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                60);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                4);
    }
  }
  /* Col=AE103*/
  if (false ||
      (a64.dstWidth == 256 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true) ||
      (a64.dstWidth == 512 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true)) {
    if (((a64.uimm & 0xc0) / 64) == 0) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                12);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                52);
    }
    if (((a64.uimm & 0xc0) / 64) == 1) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                8);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                56);
    }
    if (((a64.uimm & 0xc0) / 64) == 2) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                4);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                60);
    }
    if (((a64.uimm & 0xc0) / 64) == 3) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
    }
  }

  /* Col=AG103*/
  if (false || (a64.dstWidth == 512 && a64.PredType == A64_PRED_NO &&
                a64.EVEXb == 0 && a64.src2Type == A64_OP_REG && true)) {
    if ((a64.uimm & 0x3) == 0) {
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(13),
                                xa::ZReg(a64.srcIdx).s);
    }
    if ((a64.uimm & 0x3) == 1) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(15),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                60);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.srcIdx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                4);
    }
    if ((a64.uimm & 0x3) == 2) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(15),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                56);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.srcIdx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                8);
    }
    if ((a64.uimm & 0x3) == 3) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(15),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                52);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.srcIdx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                12);
    }
  }
  /* Col=AH103*/
  if (false || (a64.dstWidth == 512 && a64.PredType == A64_PRED_NO &&
                a64.EVEXb == 0 && a64.src2Type == A64_OP_REG && true)) {
    if (((a64.uimm & 0xc) / 4) == 0) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(15),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                4);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.srcIdx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                60);
    }
    if (((a64.uimm & 0xc) / 4) == 1) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(15),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.srcIdx).s);
    }
    if (((a64.uimm & 0xc) / 4) == 2) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(15),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                60);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.srcIdx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                4);
    }
    if (((a64.uimm & 0xc) / 4) == 3) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(15),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                56);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.srcIdx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                8);
    }
  }
  /* Col=AI103*/
  if (false || (a64.dstWidth == 512 && a64.PredType == A64_PRED_NO &&
                a64.EVEXb == 0 && a64.src2Type == A64_OP_REG && true)) {
    if (((a64.uimm & 0x30) / 16) == 0) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(15),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                8);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                56);
    }
    if (((a64.uimm & 0x30) / 16) == 1) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(15),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                4);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                60);
    }
    if (((a64.uimm & 0x30) / 16) == 2) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(15),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
    }
    if (((a64.uimm & 0x30) / 16) == 3) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(15),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                60);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                4);
    }
  }
  /* Col=AJ103*/
  if (false || (a64.dstWidth == 512 && a64.PredType == A64_PRED_NO &&
                a64.EVEXb == 0 && a64.src2Type == A64_OP_REG && true)) {
    if (((a64.uimm & 0xc0) / 64) == 0) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(15),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                12);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                52);
    }
    if (((a64.uimm & 0xc0) / 64) == 1) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(15),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                8);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                56);
    }
    if (((a64.uimm & 0xc0) / 64) == 2) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(15),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                4);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                60);
    }
    if (((a64.uimm & 0xc0) / 64) == 3) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(15),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
    }
  }
  /* Col=AK103*/
  if (false || (a64.dstWidth == 512 && a64.PredType == A64_PRED_NO &&
                a64.EVEXb == 0 && a64.src2Type == A64_OP_REG && true)) {
    if ((a64.uimm & 0x3) == 0) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.srcIdx).s);
    }
    if ((a64.uimm & 0x3) == 1) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                60);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.srcIdx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                4);
    }
    if ((a64.uimm & 0x3) == 2) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                56);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.srcIdx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                8);
    }
    if ((a64.uimm & 0x3) == 3) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                52);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.srcIdx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                12);
    }
  }
  /* Col=AL103*/
  if (false || (a64.dstWidth == 512 && a64.PredType == A64_PRED_NO &&
                a64.EVEXb == 0 && a64.src2Type == A64_OP_REG && true)) {
    if (((a64.uimm & 0xc) / 4) == 0) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                4);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.srcIdx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                60);
    }
    if (((a64.uimm & 0xc) / 4) == 1) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.srcIdx).s);
    }
    if (((a64.uimm & 0xc) / 4) == 2) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                60);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.srcIdx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                4);
    }
    if (((a64.uimm & 0xc) / 4) == 3) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                56);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.srcIdx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                8);
    }
  }
  /* Col=AM103*/
  if (false || (a64.dstWidth == 512 && a64.PredType == A64_PRED_NO &&
                a64.EVEXb == 0 && a64.src2Type == A64_OP_REG && true)) {
    if (((a64.uimm & 0x30) / 16) == 0) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                8);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                56);
    }
    if (((a64.uimm & 0x30) / 16) == 1) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                4);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                60);
    }
    if (((a64.uimm & 0x30) / 16) == 2) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
    }
    if (((a64.uimm & 0x30) / 16) == 3) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                60);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                4);
    }
  }
  /* Col=AN103*/
  if (false || (a64.dstWidth == 512 && a64.PredType == A64_PRED_NO &&
                a64.EVEXb == 0 && a64.src2Type == A64_OP_REG && true)) {
    if (((a64.uimm & 0xc0) / 64) == 0) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                12);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                52);
    }
    if (((a64.uimm & 0xc0) / 64) == 1) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                8);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                56);
    }
    if (((a64.uimm & 0xc0) / 64) == 2) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(13));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                4);
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
      CodeGeneratorAArch64::ext(xa::ZRegB(a64.zTmpIdx), xa::ZRegB(a64.zTmpIdx),
                                60);
    }
    if (((a64.uimm & 0xc0) / 64) == 3) {
      CodeGeneratorAArch64::not_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(a64.pTmpIdx),
                                 xa::PRegS(15));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::zip1(xa::PRegS(a64.pTmpIdx), xa::PRegS(13),
                                 xa::PRegS(a64.pTmpIdx));
      CodeGeneratorAArch64::and_(xa::PRegB(a64.pTmpIdx), xa::PReg(15),
                                 xa::PRegB(13), xa::PRegB(a64.pTmpIdx));
      CodeGeneratorAArch64::mov(xa::ZReg(a64.zTmpIdx).s, xa::PReg(a64.pTmpIdx),
                                xa::ZReg(a64.src2Idx).s);
    }
  }

  /* Col=AX103*/
  if (false ||
      (a64.dstWidth == 256 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true) ||
      (a64.dstWidth == 512 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true)) {
    CodeGeneratorAArch64::mov(xa::ZRegB(a64.dstIdx), xa::PReg(15),
                              xa::ZRegB(a64.zTmpIdx));
  }

  /* Col=AZ103*/
  if (false || (a64.dstWidth == 256 && a64.PredType == A64_PRED_NO &&
                a64.EVEXb == 0 && a64.src2Type == A64_OP_REG && true)) {
    CodeGeneratorAArch64::mov(xa::ZReg(a64.dstIdx).s, P_MSB_256 / xa::T_m, 0);
  }

  /* Col=BB103*/
  if (false ||
      (a64.dstWidth == 256 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true) ||
      (a64.dstWidth == 512 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true)) {
    xt_pop_preg();
  }
  /* Col=BC103*/
  if (false ||
      (a64.dstWidth == 256 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true) ||
      (a64.dstWidth == 512 && a64.PredType == A64_PRED_NO && a64.EVEXb == 0 &&
       a64.src2Type == A64_OP_REG && true)) {
    xt_pop_zreg();
  }
}
