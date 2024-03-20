#ifndef LIGHT_UNIFIED_INTERACTION_INTARFACE_CORE_ERRORS_H__
#define LIGHT_UNIFIED_INTERACTION_INTARFACE_CORE_ERRORS_H__

/**************************************************************************//**
 * @file     errors.h
 * @brief    Project L - Light unified interaction interface. Core / init / errors.h
 * @version  V0.0.1
 * @date     14. Jan 2024
 * @author   Matvey Rybalkin
 ******************************************************************************/

/**
 * @brief General light errors function.
 * 
 * @param[in] message text of the error.
*/
void light_error(const lc* message) {
    greeting_light();
    lccol(LC_COLOR_RED, LC_COLOR_BLACK);
    lcout(message);
}

/**
 * @brief General light warnings function.
 * 
 * @param[in] message text of the warning.
*/
void light_warning(const lc* message) {
    greeting_light();
    lccol(LC_COLOR_YELLOW, LC_COLOR_BLACK);
    lcout(message);
}

/* Specific errors */

void light_error_invalid_args(lu32 argc, const lc* argv) {
    greeting_light();
    lccol(LC_COLOR_RED, LC_COLOR_BLACK);
    lcout(X("Invalid argument "));
    lccol(LC_COLOR_WHITE, LC_COLOR_BLACK);
    lcout(X("["));
    lc num[2];
    num[1] = 0;
    num[0] = '0' + argc;
    lcout(num);
    lcout(X("]: "));
    lccol(LC_COLOR_YELLOW, LC_COLOR_BLACK);
    lcout(X("\""));
    lcout(argv);
    lcout(X("\"\n"));
}

#endif // LIGHT_UNIFIED_INTERACTION_INTARFACE_CORE_ERRORS_H__