#ifndef LIGHT_UNIFIED_INTERACTION_INTARFACE_CORE_NOTES_H__
#define LIGHT_UNIFIED_INTERACTION_INTARFACE_CORE_NOTES_H__

/**************************************************************************//**
 * @file     errors.h
 * @brief    Project L - Light unified interaction interface. Core / init / errors.h
 * @version  V0.0.1
 * @date     14. Jan 2024
 * @author   Matvey Rybalkin
 ******************************************************************************/

void note_interactive(void) {
    lccol(LC_COLOR_WHITE, LC_COLOR_BLACK);
    lcout(X("["));
    lccol(LC_COLOR_RED, LC_COLOR_BLACK);
    lcout(X("Light UII"));
    lccol(LC_COLOR_WHITE, LC_COLOR_BLACK);
    lcout(X("]: "));
    lccol(LC_COLOR_CYAN, LC_COLOR_BLACK);
    lcout(X("Interactive mode was activated:\n"));
}

void note_you_interactive(void) {
    lccol(LC_COLOR_WHITE, LC_COLOR_BLACK);
    lcout(X("["));
    lccol(LC_COLOR_GREEN, LC_COLOR_BLACK);
    lcout(X("You"));
    lccol(LC_COLOR_WHITE, LC_COLOR_BLACK);
    lcout(X("]: "));
}

#endif // LIGHT_UNIFIED_INTERACTION_INTARFACE_CORE_NOTES_H__