#ifndef LIGHT_UNIFIED_INTERACTION_INTARFACE_CORE_UTIL_GREETING_H__
#define LIGHT_UNIFIED_INTERACTION_INTARFACE_CORE_UTIL_GREETING_H__

/**************************************************************************//**
 * @file     errors.h
 * @brief    Project L - Light unified interaction interface. Core / init / errors.h
 * @version  V0.0.1
 * @date     14. Jan 2024
 * @author   Matvey Rybalkin
 ******************************************************************************/

void greeting_light(void) {
    lccol(LC_COLOR_WHITE, LC_COLOR_BLACK);
    lcout(X("["));
    lccol(LC_COLOR_RED, LC_COLOR_BLACK);
    lcout(X("Light UII"));
    lccol(LC_COLOR_WHITE, LC_COLOR_BLACK);
    lcout(X("]: "));
}

void greeting_you(void) {
    lccol(LC_COLOR_WHITE, LC_COLOR_BLACK);
    lcout(X("["));
    lccol(LC_COLOR_RED, LC_COLOR_BLACK);
    lcout(X("You"));
    lccol(LC_COLOR_WHITE, LC_COLOR_BLACK);
    lcout(X("]: "));
}

void bye_light(void) {
    lccol(LC_COLOR_WHITE, LC_COLOR_BLACK);
}

#endif // LIGHT_UNIFIED_INTERACTION_INTARFACE_CORE_UTIL_GREETING_H__