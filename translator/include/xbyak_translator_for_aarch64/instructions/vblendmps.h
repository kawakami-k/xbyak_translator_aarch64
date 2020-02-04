void translateVBLENDMPS(xed_decoded_inst_t *p) {
  // unsigned int i, noperands, dstIdx, srcIdx;
  const xed_inst_t *xi = xed_decoded_inst_inst(p);

  const xed_operand_t *op1 =
      xed_inst_operand(xi, 0); // dstのオペランドのポインタを取得
  const xed_operand_t *op2 =
      xed_inst_operand(xi, 1); // srcのオペランドのポインタを取得
  const xed_operand_t *op3 =
      xed_inst_operand(xi, 2); // src2のオペランドのポインタを取得
  xed_operand_enum_t isDst =
      xed_operand_name(op1); // dstのオペランドの名前を取得
  xed_operand_enum_t isSrc1 =
      xed_operand_name(op2); // src1のオペランドの名前を取得
  xed_operand_enum_t isSrc2 =
      xed_operand_name(op3); // srcのオペランドの名前を取得

  xed_uint_t dstWidth = xed_decoded_inst_operand_length_bits(p, 0);
  // xed_uint_t isSrcSize = xed_decoded_inst_operand_length_bits(p, 1);

  const xed_reg_class_enum_t DstRegClass =
      xed_reg_class(xed_decoded_inst_get_reg(p, isDst));
  const xed_reg_class_enum_t SrcRegClass1 =
      xed_reg_class(xed_decoded_inst_get_reg(p, isSrc1));

  unsigned int a64_dstIdx;
  unsigned int a64_src1Idx;
  unsigned int a64_src2Idx;
  unsigned int a64_maskIdx;

  bool isMasking;
  bool isMerging;
  bool isZeroing;

  if (false ||
      (dstWidth == 128 && isMasking == 0 && isMerging == 0 && isZeroing == 0 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_REG2)) {
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    mov__(pTmp.b, p15.b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m,
          Xbyak_aarch64::ZReg(a64_src2Idx).s);
    mov__(pTmp.b, p14.b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    xt_pop_preg();
  }
  if (false ||
      (dstWidth == 128 && isMasking == 0 && isMerging == 0 && isZeroing == 0 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_MEM0)) {
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    Xbyak_aarch64::ZReg zTmp = xt_push_zreg();
    mov__(pTmp.b, p15.b);
    ld1b(zTmp.s, pTmp / Xbyak_aarch64::T_m, Xbyak_aarch64::ptr(X_TMP_ADDR));
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, zTmp.s);
    mov__(pTmp.b, p14.b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    xt_pop_preg();
    xt_pop_zreg();
  }
  if (false ||
      (dstWidth == 128 && isMasking == 0 && isMerging == 0 && isZeroing == 0 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_BCAST)) {
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    Xbyak_aarch64::ZReg zTmp = xt_push_zreg();
    mov__(pTmp.b, p15.b);
    ld1rw__(zTmp.s, pTmp / Xbyak_aarch64::T_z, Xbyak_aarch64::ptr(X_TMP_ADDR));
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, zTmp.s);
    mov__(pTmp.b, p14.b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    xt_pop_preg();
    xt_pop_zreg();
  }
  if (false ||
      (dstWidth == 128 && isMasking == 1 && isMerging == 0 && isZeroing == 1 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_REG2)) {
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    not_(pTmp.b, p15 / Xbyak_aarch64::T_z, Xbyak_aarch64::PReg(a64_maskIdx).b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s,
          Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_m,
          Xbyak_aarch64::ZReg(a64_src2Idx).s);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    mov__(pTmp.b, p14.b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    xt_pop_preg();
  }
  if (false ||
      (dstWidth == 128 && isMasking == 1 && isMerging == 0 && isZeroing == 1 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_MEM0)) {
    Xbyak_aarch64::ZReg zTmp = xt_push_zreg();
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    not_(pTmp.b, p15 / Xbyak_aarch64::T_z, Xbyak_aarch64::PReg(a64_maskIdx).b);
    ld1b(zTmp.s, Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_m,
         Xbyak_aarch64::ptr(X_TMP_ADDR));
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s,
          Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_m, zTmp.s);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    mov__(pTmp.b, p14.b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    xt_pop_zreg();
    xt_pop_preg();
  }
  if (false ||
      (dstWidth == 128 && isMasking == 1 && isMerging == 0 && isZeroing == 1 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_BCAST)) {
    Xbyak_aarch64::ZReg zTmp = xt_push_zreg();
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    not_(pTmp.b, p15 / Xbyak_aarch64::T_z, Xbyak_aarch64::PReg(a64_maskIdx).b);
    ld1rw__(zTmp.s, Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_z,
            Xbyak_aarch64::ptr(X_TMP_ADDR));
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s,
          Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_m, zTmp.s);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    mov__(pTmp.b, p14.b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    xt_pop_zreg();
    xt_pop_preg();
  }
  if (false ||
      (dstWidth == 128 && isMasking == 1 && isMerging == 1 && isZeroing == 0 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_REG2)) {
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    not_(pTmp.b, p15 / Xbyak_aarch64::T_z, Xbyak_aarch64::PReg(a64_maskIdx).b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s,
          Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_m,
          Xbyak_aarch64::ZReg(a64_src2Idx).s);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m,
          Xbyak_aarch64::ZReg(a64_src1Idx).s);
    mov__(pTmp.b, p14.b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    xt_pop_preg();
  }
  if (false ||
      (dstWidth == 128 && isMasking == 1 && isMerging == 1 && isZeroing == 0 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_MEM0)) {
    Xbyak_aarch64::ZReg zTmp = xt_push_zreg();
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    not_(pTmp.b, p15 / Xbyak_aarch64::T_z, Xbyak_aarch64::PReg(a64_maskIdx).b);
    ld1b(zTmp.s, Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_m,
         Xbyak_aarch64::ptr(X_TMP_ADDR));
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s,
          Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_m, zTmp.s);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m,
          Xbyak_aarch64::ZReg(a64_src1Idx).s);
    mov__(pTmp.b, p14.b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    xt_pop_zreg();
    xt_pop_preg();
  }
  if (false ||
      (dstWidth == 128 && isMasking == 1 && isMerging == 1 && isZeroing == 0 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_BCAST)) {
    Xbyak_aarch64::ZReg zTmp = xt_push_zreg();
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    not_(pTmp.b, p15 / Xbyak_aarch64::T_z, Xbyak_aarch64::PReg(a64_maskIdx).b);
    ld1rw__(zTmp.s, Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_z,
            Xbyak_aarch64::ptr(X_TMP_ADDR));
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s,
          Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_m, zTmp.s);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m,
          Xbyak_aarch64::ZReg(a64_src1Idx).s);
    mov__(pTmp.b, p14.b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    xt_pop_zreg();
    xt_pop_preg();
  }
  if (false ||
      (dstWidth == 256 && isMasking == 0 && isMerging == 0 && isZeroing == 0 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_REG2)) {
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    mov__(pTmp.b, p15.b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m,
          Xbyak_aarch64::ZReg(a64_src2Idx).s);
    mov__(pTmp.b, p13.b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    xt_pop_preg();
  }
  if (false ||
      (dstWidth == 256 && isMasking == 0 && isMerging == 0 && isZeroing == 0 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_MEM0)) {
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    Xbyak_aarch64::ZReg zTmp = xt_push_zreg();
    mov__(pTmp.b, p15.b);
    ld1b(zTmp.s, pTmp / Xbyak_aarch64::T_m, Xbyak_aarch64::ptr(X_TMP_ADDR));
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, zTmp.s);
    mov__(pTmp.b, p13.b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    xt_pop_preg();
    xt_pop_zreg();
  }
  if (false ||
      (dstWidth == 256 && isMasking == 0 && isMerging == 0 && isZeroing == 0 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_BCAST)) {
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    Xbyak_aarch64::ZReg zTmp = xt_push_zreg();
    mov__(pTmp.b, p15.b);
    ld1rw__(zTmp.s, pTmp / Xbyak_aarch64::T_z, Xbyak_aarch64::ptr(X_TMP_ADDR));
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, zTmp.s);
    mov__(pTmp.b, p13.b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    xt_pop_preg();
    xt_pop_zreg();
  }
  if (false ||
      (dstWidth == 256 && isMasking == 1 && isMerging == 0 && isZeroing == 1 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_REG2)) {
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    not_(pTmp.b, p15 / Xbyak_aarch64::T_z, Xbyak_aarch64::PReg(a64_maskIdx).b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s,
          Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_m,
          Xbyak_aarch64::ZReg(a64_src2Idx).s);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    mov__(pTmp.b, p13.b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    xt_pop_preg();
  }
  if (false ||
      (dstWidth == 256 && isMasking == 1 && isMerging == 0 && isZeroing == 1 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_MEM0)) {
    Xbyak_aarch64::ZReg zTmp = xt_push_zreg();
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    not_(pTmp.b, p15 / Xbyak_aarch64::T_z, Xbyak_aarch64::PReg(a64_maskIdx).b);
    ld1b(zTmp.s, Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_m,
         Xbyak_aarch64::ptr(X_TMP_ADDR));
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s,
          Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_m, zTmp.s);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    mov__(pTmp.b, p13.b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    xt_pop_zreg();
    xt_pop_preg();
  }
  if (false ||
      (dstWidth == 256 && isMasking == 1 && isMerging == 0 && isZeroing == 1 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_BCAST)) {
    Xbyak_aarch64::ZReg zTmp = xt_push_zreg();
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    not_(pTmp.b, p15 / Xbyak_aarch64::T_z, Xbyak_aarch64::PReg(a64_maskIdx).b);
    ld1rw__(zTmp.s, Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_z,
            Xbyak_aarch64::ptr(X_TMP_ADDR));
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s,
          Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_m, zTmp.s);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    mov__(pTmp.b, p13.b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    xt_pop_zreg();
    xt_pop_preg();
  }
  if (false ||
      (dstWidth == 256 && isMasking == 1 && isMerging == 1 && isZeroing == 0 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_REG2)) {
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    not_(pTmp.b, p15 / Xbyak_aarch64::T_z, Xbyak_aarch64::PReg(a64_maskIdx).b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s,
          Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_m,
          Xbyak_aarch64::ZReg(a64_src2Idx).s);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m,
          Xbyak_aarch64::ZReg(a64_src1Idx).s);
    mov__(pTmp.b, p13.b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    xt_pop_preg();
  }
  if (false ||
      (dstWidth == 256 && isMasking == 1 && isMerging == 1 && isZeroing == 0 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_MEM0)) {
    Xbyak_aarch64::ZReg zTmp = xt_push_zreg();
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    not_(pTmp.b, p15 / Xbyak_aarch64::T_z, Xbyak_aarch64::PReg(a64_maskIdx).b);
    ld1b(zTmp.s, Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_m,
         Xbyak_aarch64::ptr(X_TMP_ADDR));
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s,
          Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_m, zTmp.s);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m,
          Xbyak_aarch64::ZReg(a64_src1Idx).s);
    mov__(pTmp.b, p13.b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    xt_pop_zreg();
    xt_pop_preg();
  }
  if (false ||
      (dstWidth == 256 && isMasking == 1 && isMerging == 1 && isZeroing == 0 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_BCAST)) {
    Xbyak_aarch64::ZReg zTmp = xt_push_zreg();
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    not_(pTmp.b, p15 / Xbyak_aarch64::T_z, Xbyak_aarch64::PReg(a64_maskIdx).b);
    ld1rw__(zTmp.s, Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_z,
            Xbyak_aarch64::ptr(X_TMP_ADDR));
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s,
          Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_m, zTmp.s);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m,
          Xbyak_aarch64::ZReg(a64_src1Idx).s);
    mov__(pTmp.b, p13.b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    xt_pop_zreg();
    xt_pop_preg();
  }
  if (false ||
      (dstWidth == 512 && isMasking == 0 && isMerging == 0 && isZeroing == 0 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_REG2)) {
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    mov__(pTmp.b, p15.b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m,
          Xbyak_aarch64::ZReg(a64_src2Idx).s);
    xt_pop_preg();
  }
  if (false ||
      (dstWidth == 512 && isMasking == 0 && isMerging == 0 && isZeroing == 0 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_MEM0)) {
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    Xbyak_aarch64::ZReg zTmp = xt_push_zreg();
    mov__(pTmp.b, p15.b);
    ld1b(zTmp.s, pTmp / Xbyak_aarch64::T_m, Xbyak_aarch64::ptr(X_TMP_ADDR));
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, zTmp.s);
    xt_pop_preg();
    xt_pop_zreg();
  }
  if (false ||
      (dstWidth == 512 && isMasking == 0 && isMerging == 0 && isZeroing == 0 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_BCAST)) {
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    Xbyak_aarch64::ZReg zTmp = xt_push_zreg();
    mov__(pTmp.b, p15.b);
    ld1rw__(zTmp.s, pTmp / Xbyak_aarch64::T_z, Xbyak_aarch64::ptr(X_TMP_ADDR));
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, zTmp.s);
    xt_pop_preg();
    xt_pop_zreg();
  }
  if (false ||
      (dstWidth == 512 && isMasking == 1 && isMerging == 0 && isZeroing == 1 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_REG2)) {
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    not_(pTmp.b, p15 / Xbyak_aarch64::T_z, Xbyak_aarch64::PReg(a64_maskIdx).b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s,
          Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_m,
          Xbyak_aarch64::ZReg(a64_src2Idx).s);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    xt_pop_preg();
  }
  if (false ||
      (dstWidth == 512 && isMasking == 1 && isMerging == 0 && isZeroing == 1 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_MEM0)) {
    Xbyak_aarch64::ZReg zTmp = xt_push_zreg();
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    not_(pTmp.b, p15 / Xbyak_aarch64::T_z, Xbyak_aarch64::PReg(a64_maskIdx).b);
    ld1b(zTmp.s, Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_m,
         Xbyak_aarch64::ptr(X_TMP_ADDR));
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s,
          Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_m, zTmp.s);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    xt_pop_zreg();
    xt_pop_preg();
  }
  if (false ||
      (dstWidth == 512 && isMasking == 1 && isMerging == 0 && isZeroing == 1 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_BCAST)) {
    Xbyak_aarch64::ZReg zTmp = xt_push_zreg();
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    not_(pTmp.b, p15 / Xbyak_aarch64::T_z, Xbyak_aarch64::PReg(a64_maskIdx).b);
    ld1rw__(zTmp.s, Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_z,
            Xbyak_aarch64::ptr(X_TMP_ADDR));
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s,
          Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_m, zTmp.s);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m, 0);
    xt_pop_zreg();
    xt_pop_preg();
  }
  if (false ||
      (dstWidth == 512 && isMasking == 1 && isMerging == 1 && isZeroing == 0 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_REG2)) {
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    not_(pTmp.b, p15 / Xbyak_aarch64::T_z, Xbyak_aarch64::PReg(a64_maskIdx).b);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s,
          Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_m,
          Xbyak_aarch64::ZReg(a64_src2Idx).s);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m,
          Xbyak_aarch64::ZReg(a64_src1Idx).s);
    xt_pop_preg();
  }
  if (false ||
      (dstWidth == 512 && isMasking == 1 && isMerging == 1 && isZeroing == 0 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_MEM0)) {
    Xbyak_aarch64::ZReg zTmp = xt_push_zreg();
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    not_(pTmp.b, p15 / Xbyak_aarch64::T_z, Xbyak_aarch64::PReg(a64_maskIdx).b);
    ld1b(zTmp.s, Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_m,
         Xbyak_aarch64::ptr(X_TMP_ADDR));
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s,
          Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_m, zTmp.s);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m,
          Xbyak_aarch64::ZReg(a64_src1Idx).s);
    xt_pop_zreg();
    xt_pop_preg();
  }
  if (false ||
      (dstWidth == 512 && isMasking == 1 && isMerging == 1 && isZeroing == 0 &&
       isDst == XED_OPERAND_REG0 && isSrc2 == XED_OPERAND_BCAST)) {
    Xbyak_aarch64::ZReg zTmp = xt_push_zreg();
    Xbyak_aarch64::PReg pTmp = xt_push_preg();
    not_(pTmp.b, p15 / Xbyak_aarch64::T_z, Xbyak_aarch64::PReg(a64_maskIdx).b);
    ld1rw__(zTmp.s, Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_z,
            Xbyak_aarch64::ptr(X_TMP_ADDR));
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s,
          Xbyak_aarch64::PReg(a64_maskIdx) / Xbyak_aarch64::T_m, zTmp.s);
    mov__(Xbyak_aarch64::ZReg(a64_dstIdx).s, pTmp / Xbyak_aarch64::T_m,
          Xbyak_aarch64::ZReg(a64_src1Idx).s);
    xt_pop_zreg();
    xt_pop_preg();
  }
}