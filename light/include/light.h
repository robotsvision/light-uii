#ifndef LIGHT_UNIFIED_INTERACTION_INTARFACE_H__
#define LIGHT_UNIFIED_INTERACTION_INTARFACE_H__

/**************************************************************************//**
 * @file     light.h
 * @brief    Project L - Light unified interaction interface. Main library.
 * @version  V0.0.1
 * @date     14. Jan 2024
 * @author   Matvey Rybalkin
 ******************************************************************************/

/* Check C standard */
#if __STDC_VERSION__ >= 201112L

/* Include llibs framework (external) */
#include <llibs.h>

/* Include Light core libraries */
#include "core/core.h"

#else /* ERROR (__STDC_VERSION__ >= 201112L) */
#error [light.h]: Requires at least version C 2011 (__STDC_VERSION__ >= 201112L)
#endif 

#endif // LIGHT_UNIFIED_INTERACTION_INTARFACE_H__
