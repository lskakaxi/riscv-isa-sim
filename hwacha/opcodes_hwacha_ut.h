DECLARE_INSN(ut_movn, 0x2007077, 0xfe00707f)
DECLARE_INSN(ut_movz, 0x7077, 0xfe00707f)
DECLARE_INSN(ut_fmovn, 0x6007077, 0xfe00707f)
DECLARE_INSN(ut_fmovz, 0x4007077, 0xfe00707f)
DECLARE_INSN(ut_stop, 0x5077, 0xffffffff)
DECLARE_INSN(ut_utidx, 0x6077, 0xfffff07f)
DECLARE_INSN(ut_fmv_s_x, 0xf0000053, 0xfff0707f)
DECLARE_INSN(ut_amoxor_w, 0x2000202f, 0xf800707f)
DECLARE_INSN(ut_remuw, 0x200703b, 0xfe00707f)
DECLARE_INSN(ut_fmin_d, 0xc2000053, 0xfe00707f)
DECLARE_INSN(ut_amomax_d, 0xa000302f, 0xf800707f)
DECLARE_INSN(ut_fmin_s, 0xc0000053, 0xfe00707f)
DECLARE_INSN(ut_slliw, 0x4000101b, 0xfe00707f)
DECLARE_INSN(ut_lb, 0x3, 0x707f)
DECLARE_INSN(ut_fcvt_s_wu, 0x78000053, 0xfff0007f)
DECLARE_INSN(ut_fcvt_d_l, 0x62000053, 0xfff0007f)
DECLARE_INSN(ut_lh, 0x1003, 0x707f)
DECLARE_INSN(ut_frsr, 0xe8000053, 0xfffff07f)
DECLARE_INSN(ut_fcvt_d_w, 0x72000053, 0xfff0007f)
DECLARE_INSN(ut_lw, 0x2003, 0x707f)
DECLARE_INSN(ut_add, 0x33, 0xfe00707f)
DECLARE_INSN(ut_fcvt_d_s, 0x82000053, 0xfff0007f)
DECLARE_INSN(ut_fmax_d, 0xca000053, 0xfe00707f)
DECLARE_INSN(ut_fcvt_s_d, 0x88000053, 0xfff0007f)
DECLARE_INSN(ut_fadd_d, 0x2000053, 0xfe00007f)
DECLARE_INSN(ut_sltiu, 0x3013, 0x707f)
DECLARE_INSN(ut_fcvt_s_w, 0x70000053, 0xfff0007f)
DECLARE_INSN(ut_mul, 0x2000033, 0xfe00707f)
DECLARE_INSN(ut_amominu_d, 0xc000302f, 0xf800707f)
DECLARE_INSN(ut_srli, 0x5013, 0xfc00707f)
DECLARE_INSN(ut_amominu_w, 0xc000202f, 0xf800707f)
DECLARE_INSN(ut_divuw, 0x200503b, 0xfe00707f)
DECLARE_INSN(ut_mulw, 0x200003b, 0xfe00707f)
DECLARE_INSN(ut_srlw, 0x503b, 0xfe00707f)
DECLARE_INSN(ut_div, 0x2004033, 0xfe00707f)
DECLARE_INSN(ut_fdiv_d, 0x1a000053, 0xfe00007f)
DECLARE_INSN(ut_fence, 0xf, 0x707f)
DECLARE_INSN(ut_fnmsub_s, 0x4b, 0x600007f)
DECLARE_INSN(ut_fcvt_l_s, 0x40000053, 0xfff0007f)
DECLARE_INSN(ut_fle_s, 0xb8000053, 0xfe00707f)
DECLARE_INSN(ut_fdiv_s, 0x18000053, 0xfe00007f)
DECLARE_INSN(ut_fle_d, 0xba000053, 0xfe00707f)
DECLARE_INSN(ut_fnmsub_d, 0x200004b, 0x600007f)
DECLARE_INSN(ut_addw, 0x3b, 0xfe00707f)
DECLARE_INSN(ut_sll, 0x1033, 0xfe00707f)
DECLARE_INSN(ut_xor, 0x4033, 0xfe00707f)
DECLARE_INSN(ut_sub, 0x40000033, 0xfe00707f)
DECLARE_INSN(ut_rem, 0x2006033, 0xfe00707f)
DECLARE_INSN(ut_srliw, 0x501b, 0xfe00707f)
DECLARE_INSN(ut_lui, 0x37, 0x7f)
DECLARE_INSN(ut_fcvt_s_lu, 0x68000053, 0xfff0007f)
DECLARE_INSN(ut_addi, 0x13, 0x707f)
DECLARE_INSN(ut_mulh, 0x2001033, 0xfe00707f)
DECLARE_INSN(ut_fmul_s, 0x10000053, 0xfe00007f)
DECLARE_INSN(ut_srai, 0x40005013, 0xfc00707f)
DECLARE_INSN(ut_amoand_d, 0x6000302f, 0xf800707f)
DECLARE_INSN(ut_flt_d, 0xb2000053, 0xfe00707f)
DECLARE_INSN(ut_sraw, 0x4000503b, 0xfe00707f)
DECLARE_INSN(ut_fmul_d, 0x12000053, 0xfe00007f)
DECLARE_INSN(ut_ld, 0x3003, 0x707f)
DECLARE_INSN(ut_ori, 0x6013, 0x707f)
DECLARE_INSN(ut_flt_s, 0xb0000053, 0xfe00707f)
DECLARE_INSN(ut_addiw, 0x1b, 0x707f)
DECLARE_INSN(ut_amoand_w, 0x6000202f, 0xf800707f)
DECLARE_INSN(ut_feq_s, 0xa8000053, 0xfe00707f)
DECLARE_INSN(ut_fsgnjx_d, 0x3a000053, 0xfe00707f)
DECLARE_INSN(ut_sra, 0x40005033, 0xfe00707f)
DECLARE_INSN(ut_sraiw, 0x4000501b, 0xfe00707f)
DECLARE_INSN(ut_srl, 0x5033, 0xfe00707f)
DECLARE_INSN(ut_fsub_d, 0xa000053, 0xfe00007f)
DECLARE_INSN(ut_fsgnjx_s, 0x38000053, 0xfe00707f)
DECLARE_INSN(ut_feq_d, 0xaa000053, 0xfe00707f)
DECLARE_INSN(ut_fcvt_d_wu, 0x7a000053, 0xfff0007f)
DECLARE_INSN(ut_or, 0x6033, 0xfe00707f)
DECLARE_INSN(ut_fcvt_wu_d, 0x5a000053, 0xfff0007f)
DECLARE_INSN(ut_subw, 0x4000003b, 0xfe00707f)
DECLARE_INSN(ut_fmax_s, 0xc8000053, 0xfe00707f)
DECLARE_INSN(ut_amomaxu_d, 0xe000302f, 0xf800707f)
DECLARE_INSN(ut_xori, 0x4013, 0x707f)
DECLARE_INSN(ut_amoxor_d, 0x2000302f, 0xf800707f)
DECLARE_INSN(ut_amomaxu_w, 0xe000202f, 0xf800707f)
DECLARE_INSN(ut_fcvt_wu_s, 0x58000053, 0xfff0007f)
DECLARE_INSN(ut_andi, 0x7013, 0x707f)
DECLARE_INSN(ut_fmv_x_s, 0xe0000053, 0xfff0707f)
DECLARE_INSN(ut_fsgnjn_d, 0x32000053, 0xfe00707f)
DECLARE_INSN(ut_fnmadd_s, 0x4f, 0x600007f)
DECLARE_INSN(ut_lwu, 0x6003, 0x707f)
DECLARE_INSN(ut_fmv_x_d, 0xe2000053, 0xfff0707f)
DECLARE_INSN(ut_fnmadd_d, 0x200004f, 0x600007f)
DECLARE_INSN(ut_amoadd_d, 0x302f, 0xf800707f)
DECLARE_INSN(ut_fcvt_w_s, 0x50000053, 0xfff0007f)
DECLARE_INSN(ut_mulhsu, 0x2002033, 0xfe00707f)
DECLARE_INSN(ut_amoadd_w, 0x202f, 0xf800707f)
DECLARE_INSN(ut_fcvt_d_lu, 0x6a000053, 0xfff0007f)
DECLARE_INSN(ut_fcvt_w_d, 0x52000053, 0xfff0007f)
DECLARE_INSN(ut_slt, 0x2033, 0xfe00707f)
DECLARE_INSN(ut_sllw, 0x103b, 0xfe00707f)
DECLARE_INSN(ut_amoor_d, 0x4000302f, 0xf800707f)
DECLARE_INSN(ut_slti, 0x2013, 0x707f)
DECLARE_INSN(ut_remu, 0x2007033, 0xfe00707f)
DECLARE_INSN(ut_flw, 0x2007, 0x707f)
DECLARE_INSN(ut_remw, 0x200603b, 0xfe00707f)
DECLARE_INSN(ut_sltu, 0x3033, 0xfe00707f)
DECLARE_INSN(ut_slli, 0x40001013, 0xfc00707f)
DECLARE_INSN(ut_amoor_w, 0x4000202f, 0xf800707f)
DECLARE_INSN(ut_fld, 0x3007, 0x707f)
DECLARE_INSN(ut_fsub_s, 0x8000053, 0xfe00007f)
DECLARE_INSN(ut_and, 0x7033, 0xfe00707f)
DECLARE_INSN(ut_fmv_d_x, 0xf2000053, 0xfff0707f)
DECLARE_INSN(ut_lbu, 0x4003, 0x707f)
DECLARE_INSN(ut_fsgnj_s, 0x28000053, 0xfe00707f)
DECLARE_INSN(ut_amomax_w, 0xa000202f, 0xf800707f)
DECLARE_INSN(ut_fsgnj_d, 0x2a000053, 0xfe00707f)
DECLARE_INSN(ut_mulhu, 0x2003033, 0xfe00707f)
DECLARE_INSN(ut_fcvt_l_d, 0x42000053, 0xfff0007f)
DECLARE_INSN(ut_fssr, 0xf8000053, 0xfff0707f)
DECLARE_INSN(ut_fcvt_lu_s, 0x48000053, 0xfff0007f)
DECLARE_INSN(ut_fcvt_s_l, 0x60000053, 0xfff0007f)
DECLARE_INSN(ut_auipc, 0x17, 0x7f)
DECLARE_INSN(ut_fcvt_lu_d, 0x4a000053, 0xfff0007f)
DECLARE_INSN(ut_fmadd_s, 0x43, 0x600007f)
DECLARE_INSN(ut_fsqrt_s, 0x20000053, 0xfff0007f)
DECLARE_INSN(ut_amomin_w, 0x8000202f, 0xf800707f)
DECLARE_INSN(ut_fsgnjn_s, 0x30000053, 0xfe00707f)
DECLARE_INSN(ut_amoswap_d, 0x800302f, 0xf800707f)
DECLARE_INSN(ut_fsqrt_d, 0x22000053, 0xfff0007f)
DECLARE_INSN(ut_fmadd_d, 0x2000043, 0x600007f)
DECLARE_INSN(ut_divw, 0x200403b, 0xfe00707f)
DECLARE_INSN(ut_amomin_d, 0x8000302f, 0xf800707f)
DECLARE_INSN(ut_divu, 0x2005033, 0xfe00707f)
DECLARE_INSN(ut_amoswap_w, 0x800202f, 0xf800707f)
DECLARE_INSN(ut_fadd_s, 0x53, 0xfe00007f)
DECLARE_INSN(ut_fsd, 0x3027, 0x707f)
DECLARE_INSN(ut_sw, 0x2023, 0x707f)
DECLARE_INSN(ut_fmsub_s, 0x47, 0x600007f)
DECLARE_INSN(ut_lhu, 0x5003, 0x707f)
DECLARE_INSN(ut_sh, 0x1023, 0x707f)
DECLARE_INSN(ut_fsw, 0x2027, 0x707f)
DECLARE_INSN(ut_sb, 0x23, 0x707f)
DECLARE_INSN(ut_fmsub_d, 0x2000047, 0x600007f)
DECLARE_INSN(ut_sd, 0x3023, 0x707f)
