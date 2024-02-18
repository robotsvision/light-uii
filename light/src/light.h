#ifndef __LIGHT_MAIN_H__
#define __LIGHT_MAIN_H__

/**************************************************************************//**
 * @file     light.h
 * @brief    Project L - Light unified interaction interface / main library
 * @version  V0.0.1
 * @date     17. Feb 2024
 ******************************************************************************/

/* Check C standard */
#if __STDC_VERSION__ >= 201112L

/* Llibs framework */
#include <llibs.h>

#else /* ERROR (__STDC_VERSION__ >= 201112L) */
#error [light.h]: Requires at least version C 2011 (__STDC_VERSION__ >= 201112L)
#endif

#endif // __LIGHT_MAIN_H__