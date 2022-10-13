/* SPDX-License-Identifier: GPL-2.0 */
/*
 *
 * (C) COPYRIGHT 2016-2018 ARM Limited. All rights reserved.
 *
 * This program is free software and is provided to you under the terms of the
 * GNU General Public License version 2 as published by the Free Software
 * Foundation, and any use by you of this program is subject to the terms
 * of such GNU license.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, you can access it online at
 * http://www.gnu.org/licenses/gpl-2.0.html.
 *
 */

/*
 * This header was autogenerated, it should not be edited.
 */

#ifndef _KBASE_GATOR_HWCNT_NAMES_TMIX_H_
#define _KBASE_GATOR_HWCNT_NAMES_TMIX_H_

static const char * const hardware_counters_mali_tMIx[] = {
	/* Performance counters for the Job Manager */
	"",
	"",
	"",
	"",
	"TMIx_MESSAGES_SENT",
	"TMIx_MESSAGES_RECEIVED",
	"TMIx_GPU_ACTIVE",
	"TMIx_IRQ_ACTIVE",
	"TMIx_JS0_JOBS",
	"TMIx_JS0_TASKS",
	"TMIx_JS0_ACTIVE",
	"",
	"TMIx_JS0_WAIT_READ",
	"TMIx_JS0_WAIT_ISSUE",
	"TMIx_JS0_WAIT_DEPEND",
	"TMIx_JS0_WAIT_FINISH",
	"TMIx_JS1_JOBS",
	"TMIx_JS1_TASKS",
	"TMIx_JS1_ACTIVE",
	"",
	"TMIx_JS1_WAIT_READ",
	"TMIx_JS1_WAIT_ISSUE",
	"TMIx_JS1_WAIT_DEPEND",
	"TMIx_JS1_WAIT_FINISH",
	"TMIx_JS2_JOBS",
	"TMIx_JS2_TASKS",
	"TMIx_JS2_ACTIVE",
	"",
	"TMIx_JS2_WAIT_READ",
	"TMIx_JS2_WAIT_ISSUE",
	"TMIx_JS2_WAIT_DEPEND",
	"TMIx_JS2_WAIT_FINISH",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",

	/* Performance counters for the Tiler */
	"",
	"",
	"",
	"",
	"TMIx_TILER_ACTIVE",
	"TMIx_JOBS_PROCESSED",
	"TMIx_TRIANGLES",
	"TMIx_LINES",
	"TMIx_POINTS",
	"TMIx_FRONT_FACING",
	"TMIx_BACK_FACING",
	"TMIx_PRIM_VISIBLE",
	"TMIx_PRIM_CULLED",
	"TMIx_PRIM_CLIPPED",
	"TMIx_PRIM_SAT_CULLED",
	"TMIx_BIN_ALLOC_INIT",
	"TMIx_BIN_ALLOC_OVERFLOW",
	"TMIx_BUS_READ",
	"",
	"TMIx_BUS_WRITE",
	"TMIx_LOADING_DESC",
	"TMIx_IDVS_POS_SHAD_REQ",
	"TMIx_IDVS_POS_SHAD_WAIT",
	"TMIx_IDVS_POS_SHAD_STALL",
	"TMIx_IDVS_POS_FIFO_FULL",
	"TMIx_PREFETCH_STALL",
	"TMIx_VCACHE_HIT",
	"TMIx_VCACHE_MISS",
	"TMIx_VCACHE_LINE_WAIT",
	"TMIx_VFETCH_POS_READ_WAIT",
	"TMIx_VFETCH_VERTEX_WAIT",
	"TMIx_VFETCH_STALL",
	"TMIx_PRIMASSY_STALL",
	"TMIx_BBOX_GEN_STALL",
	"TMIx_IDVS_VBU_HIT",
	"TMIx_IDVS_VBU_MISS",
	"TMIx_IDVS_VBU_LINE_DEALLOCATE",
	"TMIx_IDVS_VAR_SHAD_REQ",
	"TMIx_IDVS_VAR_SHAD_STALL",
	"TMIx_BINNER_STALL",
	"TMIx_ITER_STALL",
	"TMIx_COMPRESS_MISS",
	"TMIx_COMPRESS_STALL",
	"TMIx_PCACHE_HIT",
	"TMIx_PCACHE_MISS",
	"TMIx_PCACHE_MISS_STALL",
	"TMIx_PCACHE_EVICT_STALL",
	"TMIx_PMGR_PTR_WR_STALL",
	"TMIx_PMGR_PTR_RD_STALL",
	"TMIx_PMGR_CMD_WR_STALL",
	"TMIx_WRBUF_ACTIVE",
	"TMIx_WRBUF_HIT",
	"TMIx_WRBUF_MISS",
	"TMIx_WRBUF_NO_FREE_LINE_STALL",
	"TMIx_WRBUF_NO_AXI_ID_STALL",
	"TMIx_WRBUF_AXI_STALL",
	"",
	"",
	"",
	"TMIx_UTLB_TRANS",
	"TMIx_UTLB_TRANS_HIT",
	"TMIx_UTLB_TRANS_STALL",
	"TMIx_UTLB_TRANS_MISS_DELAY",
	"TMIx_UTLB_MMU_REQ",

	/* Performance counters for the Shader Core */
	"",
	"",
	"",
	"",
	"TMIx_FRAG_ACTIVE",
	"TMIx_FRAG_PRIMITIVES",
	"TMIx_FRAG_PRIM_RAST",
	"TMIx_FRAG_FPK_ACTIVE",
	"TMIx_FRAG_STARVING",
	"TMIx_FRAG_WARPS",
	"TMIx_FRAG_PARTIAL_WARPS",
	"TMIx_FRAG_QUADS_RAST",
	"TMIx_FRAG_QUADS_EZS_TEST",
	"TMIx_FRAG_QUADS_EZS_UPDATE",
	"TMIx_FRAG_QUADS_EZS_KILL",
	"TMIx_FRAG_LZS_TEST",
	"TMIx_FRAG_LZS_KILL",
	"",
	"TMIx_FRAG_PTILES",
	"TMIx_FRAG_TRANS_ELIM",
	"TMIx_QUAD_FPK_KILLER",
	"",
	"TMIx_COMPUTE_ACTIVE",
	"TMIx_COMPUTE_TASKS",
	"TMIx_COMPUTE_WARPS",
	"TMIx_COMPUTE_STARVING",
	"TMIx_EXEC_CORE_ACTIVE",
	"TMIx_EXEC_ACTIVE",
	"TMIx_EXEC_INSTR_COUNT",
	"TMIx_EXEC_INSTR_DIVERGED",
	"TMIx_EXEC_INSTR_STARVING",
	"TMIx_ARITH_INSTR_SINGLE_FMA",
	"TMIx_ARITH_INSTR_DOUBLE",
	"TMIx_ARITH_INSTR_MSG",
	"TMIx_ARITH_INSTR_MSG_ONLY",
	"TMIx_TEX_INSTR",
	"TMIx_TEX_INSTR_MIPMAP",
	"TMIx_TEX_INSTR_COMPRESSED",
	"TMIx_TEX_INSTR_3D",
	"TMIx_TEX_INSTR_TRILINEAR",
	"TMIx_TEX_COORD_ISSUE",
	"TMIx_TEX_COORD_STALL",
	"TMIx_TEX_STARVE_CACHE",
	"TMIx_TEX_STARVE_FILTER",
	"TMIx_LS_MEM_READ_FULL",
	"TMIx_LS_MEM_READ_SHORT",
	"TMIx_LS_MEM_WRITE_FULL",
	"TMIx_LS_MEM_WRITE_SHORT",
	"TMIx_LS_MEM_ATOMIC",
	"TMIx_VARY_INSTR",
	"TMIx_VARY_SLOT_32",
	"TMIx_VARY_SLOT_16",
	"TMIx_ATTR_INSTR",
	"TMIx_ARITH_INSTR_FP_MUL",
	"TMIx_BEATS_RD_FTC",
	"TMIx_BEATS_RD_FTC_EXT",
	"TMIx_BEATS_RD_LSC",
	"TMIx_BEATS_RD_LSC_EXT",
	"TMIx_BEATS_RD_TEX",
	"TMIx_BEATS_RD_TEX_EXT",
	"TMIx_BEATS_RD_OTHER",
	"TMIx_BEATS_WR_LSC",
	"TMIx_BEATS_WR_TIB",
	"",

	/* Performance counters for the Memory System */
	"",
	"",
	"",
	"",
	"TMIx_MMU_REQUESTS",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
	"TMIx_L2_RD_MSG_IN",
	"TMIx_L2_RD_MSG_IN_STALL",
	"TMIx_L2_WR_MSG_IN",
	"TMIx_L2_WR_MSG_IN_STALL",
	"TMIx_L2_SNP_MSG_IN",
	"TMIx_L2_SNP_MSG_IN_STALL",
	"TMIx_L2_RD_MSG_OUT",
	"TMIx_L2_RD_MSG_OUT_STALL",
	"TMIx_L2_WR_MSG_OUT",
	"TMIx_L2_ANY_LOOKUP",
	"TMIx_L2_READ_LOOKUP",
	"TMIx_L2_WRITE_LOOKUP",
	"TMIx_L2_EXT_SNOOP_LOOKUP",
	"TMIx_L2_EXT_READ",
	"TMIx_L2_EXT_READ_NOSNP",
	"TMIx_L2_EXT_READ_UNIQUE",
	"TMIx_L2_EXT_READ_BEATS",
	"TMIx_L2_EXT_AR_STALL",
	"TMIx_L2_EXT_AR_CNT_Q1",
	"TMIx_L2_EXT_AR_CNT_Q2",
	"TMIx_L2_EXT_AR_CNT_Q3",
	"TMIx_L2_EXT_RRESP_0_127",
	"TMIx_L2_EXT_RRESP_128_191",
	"TMIx_L2_EXT_RRESP_192_255",
	"TMIx_L2_EXT_RRESP_256_319",
	"TMIx_L2_EXT_RRESP_320_383",
	"TMIx_L2_EXT_WRITE",
	"TMIx_L2_EXT_WRITE_NOSNP_FULL",
	"TMIx_L2_EXT_WRITE_NOSNP_PTL",
	"TMIx_L2_EXT_WRITE_SNP_FULL",
	"TMIx_L2_EXT_WRITE_SNP_PTL",
	"TMIx_L2_EXT_WRITE_BEATS",
	"TMIx_L2_EXT_W_STALL",
	"TMIx_L2_EXT_AW_CNT_Q1",
	"TMIx_L2_EXT_AW_CNT_Q2",
	"TMIx_L2_EXT_AW_CNT_Q3",
	"TMIx_L2_EXT_SNOOP",
	"TMIx_L2_EXT_SNOOP_STALL",
	"TMIx_L2_EXT_SNOOP_RESP_CLEAN",
	"TMIx_L2_EXT_SNOOP_RESP_DATA",
	"TMIx_L2_EXT_SNOOP_INTERNAL",
	"",
	"",
	"",
	"",
	"",
	"",
	"",
};

#endif /* _KBASE_GATOR_HWCNT_NAMES_TMIX_H_ */
