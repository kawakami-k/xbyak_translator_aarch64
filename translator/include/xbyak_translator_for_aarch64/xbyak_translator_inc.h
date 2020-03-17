#include "instructions/adc.h"
#include "instructions/add.h"
#include "instructions/and.h"
#include "instructions/cmp.h"
#include "instructions/dec.h"
#include "instructions/inc.h"
#include "instructions/kmovd.h"
#include "instructions/kmovq.h"
#include "instructions/kmovw.h"
#include "instructions/lea.h"
#include "instructions/mov.h"
#include "instructions/movd.h"
#include "instructions/movdqa.h"
#include "instructions/movdqu.h"
#include "instructions/movq.h"
#include "instructions/movsd.h"
#include "instructions/movss.h"
#include "instructions/movups.h"
#include "instructions/not.h"
#include "instructions/or.h"
#include "instructions/pause.h"
#include "instructions/pextrd.h"
#include "instructions/pinsrb.h"
#include "instructions/pinsrd.h"
#include "instructions/pinsrw.h"
#include "instructions/punpckhbw.h"
#include "instructions/punpckhdq.h"
#include "instructions/punpckhqdq.h"
#include "instructions/punpckhwd.h"
#include "instructions/punpcklbw.h"
#include "instructions/punpckldq.h"
#include "instructions/ret.h"
#include "instructions/shl.h"
#include "instructions/sub.h"
#include "instructions/test.h"
#include "instructions/vaddps.h"
#include "instructions/vaddss.h"
#include "instructions/vandps.h"
#include "instructions/vblendmps.h"
#include "instructions/vblendvps.h"
#include "instructions/vbroadcastss.h"
#include "instructions/vcmpps.h"
#include "instructions/vdivps.h"
#include "instructions/vfmadd213ps.h"
#include "instructions/vfmadd231ps.h"
#include "instructions/vfnmadd231ps.h"
#include "instructions/vinsertf128.h"
#include "instructions/vinsertf64x4.h"
#include "instructions/vinserti32x4.h"
#include "instructions/vinserti64x4.h"
#include "instructions/vmaskmovps.h"
#include "instructions/vmaxps.h"
#include "instructions/vmovaps.h"
#include "instructions/vmovd.h"
#include "instructions/vmovdqu.h"
#include "instructions/vmovdqu16.h"
#include "instructions/vmovdqu32.h"
#include "instructions/vmovdqu8.h"
#include "instructions/vmovhlps.h"
#include "instructions/vmovhps.h"
#include "instructions/vmovlps.h"
#include "instructions/vmovntps.h"
#include "instructions/vmovsd.h"
#include "instructions/vmovups.h"
#include "instructions/vmulps.h"
#include "instructions/vorps.h"
#include "instructions/vpaddd.h"
#include "instructions/vpandd.h"
#include "instructions/vpblendmb.h"
#include "instructions/vpblendmd.h"
#include "instructions/vpbroadcastb.h"
#include "instructions/vpbroadcastd.h"
#include "instructions/vpcmpb.h"
#include "instructions/vpcmpd.h"
#include "instructions/vpcmpub.h"
#include "instructions/vperm2f128.h"
#include "instructions/vperm2i128.h"
#include "instructions/vpinsrb.h"
#include "instructions/vpinsrq.h"
#include "instructions/vpmaxsd.h"
#include "instructions/vpmovusdb.h"
#include "instructions/vpord.h"
#include "instructions/vpshufb.h"
#include "instructions/vpxor.h"
#include "instructions/vpxord.h"
#include "instructions/vsqrtps.h"
#include "instructions/vsubps.h"
#include "instructions/vunpckhpd.h"
#include "instructions/vunpckhps.h"
#include "instructions/vunpcklpd.h"
#include "instructions/vxorps.h"
#include "instructions/vzeroupper.h"
#include "instructions/xadd_lock.h"
#include "instructions/xor.h"

#if 0
#include "instructions/kmovb.h"
#include "instructions/kmovd.h"
#include "instructions/kmovq.h"
#include "instructions/kortestb.h"
#include "instructions/kortestd.h"
#include "instructions/kortestq.h"
#include "instructions/kortestw.h"
#include "instructions/vblendmps.h"
//#include "instructions/vfmadd132ps.h"
//#include "instructions/vfmadd213ps.h"
#endif
