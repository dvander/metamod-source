#ifndef _INCLUDE_METAMOD_SOURCE_SERVERPLUGINS_H_
#define _INCLUDE_METAMOD_SOURCE_SERVERPLUGINS_H_

#include "loader_bridge.h"

extern void *
mm_GetVspCallbacks(unsigned int version);

extern IVspBridge *vsp_bridge;

#endif /* _INCLUDE_METAMOD_SOURCE_SERVERPLUGINS_H_ */
