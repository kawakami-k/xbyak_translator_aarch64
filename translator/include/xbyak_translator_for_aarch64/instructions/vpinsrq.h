void translateVPINSRQ(xed_decoded_inst_t *p) {
  namespace xa = Xbyak_aarch64;
  struct xt_a64fx_operands_struct_t a64;
  xt_construct_a64fx_operands(p, &a64);

  /* 2020/02/17 09:12 */

  /* Col=V103*/
  if (false || (a64.src2Type == A64_OP_MEM && true)) {
    CodeGeneratorAArch64::ldr(X_TMP_0, xa::ptr(X_TMP_ADDR));
  }

  /* Col=X103*/
  if (false || (a64.src2Type == A64_OP_REG && true) ||
      (a64.src2Type == A64_OP_MEM && true)) {
    CodeGeneratorAArch64::mov(xa::VReg(a64.dstIdx).b16,
                              xa::VReg(a64.srcIdx).b16);
  }

  /* Col=Z103*/
  if (false || (a64.src2Type == A64_OP_REG && true)) {
    CodeGeneratorAArch64::ins_(xa::VReg2D(a64.dstIdx)[a64.uimm],
                               xa::XReg(a64.src2Idx));
  }
  /* Col=AA103*/
  if (false || (a64.src2Type == A64_OP_MEM && true)) {
    CodeGeneratorAArch64::ins_(xa::VReg2D(a64.dstIdx)[a64.uimm], X_TMP_0);
  }
}