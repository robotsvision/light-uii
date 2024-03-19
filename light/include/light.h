#ifndef LIGHT_UNIFIED_INTERACTION_INTARFACE_H__
#define LIGHT_UNIFIED_INTERACTION_INTARFACE_H__

/**************************************************************************//**
 * @file     light.h
 * @brief    Project L - Light unified interaction interface. Main library.
 * @version  V0.0.1
 * @date     14. Jan 2024
 * @author   Matvey Rybalkin
 ******************************************************************************/

/*
 * This file is part of Light Unified Interaction Interface.
 * Multilingual, cross-platform framework for robots and embedded systems.
 * 
 * Copyright (C) 2024 Matvey Ryblkin
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <https://www.gnu.org/licenses/>.
 */

/* Check C standard */
#if __STDC_VERSION__ >= 201112L

/* Include llibs framework (external) */
#include <llibs.h>

/* Include Light assets */
#include "../assets/include/version.h"
#include "../assets/include/license.h"

/* Include Light core libraries */
#include "core/core.h"

/* Application main body signature */

lm light_run(lu32 argc, lc* argv[]) {
    /* Start interactive mode */
    if (argc <= 1) {
        return light_interactive();
    } else {
        /* Recognize flags */
        return light_args(argc, argv);
    }
}

#else /* ERROR (__STDC_VERSION__ >= 201112L) */
#error [light.h]: Requires at least version C 2011 (__STDC_VERSION__ >= 201112L)
#endif 

#endif // LIGHT_UNIFIED_INTERACTION_INTARFACE_H__
