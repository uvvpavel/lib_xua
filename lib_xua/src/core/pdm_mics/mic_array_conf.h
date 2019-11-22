// Copyright (c) 2015-2019, XMOS Ltd, All rights reserved
#ifndef MIC_ARRAY_CONF_H_
#define MIC_ARRAY_CONF_H_

#include "xua_conf_full.h"

#ifndef MIC_ARRAY_FRAME_SIZE
#define MIC_ARRAY_FRAME_SIZE (XUA_MIC_FRAME_SIZE)
#endif

// The default definition of MIC_ARRAY_MAX_FRAME_SIZE_LOG2 must appear in this file
//   because an assembler file #includes it.
// The assembler does not understand C language syntax, only C pre-processor syntax.
#ifndef MIC_ARRAY_MAX_FRAME_SIZE_LOG2
#define MIC_ARRAY_MAX_FRAME_SIZE_LOG2 (0)
#endif

#ifndef MIC_ARRAY_NUM_MICS
#define MIC_ARRAY_NUM_MICS (XUA_NUM_PDM_MICS)
#endif

// MIC_DUAL_FRAME_SIZE has no meaning if MIC_DUAL_ENABLED is false.
// Only define MIC_DUAL_FRAME_SIZE if MIC_DUAL_ENABLED is true.
#if defined(MIC_DUAL_ENABLED) && (MIC_DUAL_ENABLED != 0)
#ifndef MIC_DUAL_FRAME_SIZE
#define MIC_DUAL_FRAME_SIZE (XUA_MIC_FRAME_SIZE)
#endif
#endif

#endif /* MIC_ARRAY_CONF_H_ */
