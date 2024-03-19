#ifndef LIGHT_UNIFIED_INTERACTION_INTARFACE_CORE_ERRORS_H__
#define LIGHT_UNIFIED_INTERACTION_INTARFACE_CORE_ERRORS_H__

/**************************************************************************//**
 * @file     errors.h
 * @brief    Project L - Light unified interaction interface. Core / init / errors.h
 * @version  V0.0.1
 * @date     14. Jan 2024
 * @author   Matvey Rybalkin
 ******************************************************************************/

void light_error(const lc* message) {
    greeting_light();
    lccol(LC_COLOR_RED, LC_COLOR_BLACK);
    lcout(message);
}

void light_warning(const lc* message) {
    greeting_light();
    lccol(LC_COLOR_YELLOW, LC_COLOR_BLACK);
    lcout(message);
}


#endif // LIGHT_UNIFIED_INTERACTION_INTARFACE_CORE_ERRORS_H__