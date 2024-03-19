#ifndef LIGHT_UNIFIED_INTERACTION_INTARFACE_LICENSE_H__
#define LIGHT_UNIFIED_INTERACTION_INTARFACE_LICENSE_H__

/**************************************************************************//**
 * @file     license.h
 * @brief    Project L - Light unified interaction interface. Assets. License function.
 * @version  V0.0.1
 * @date     16. Jan 2024
 * @author   Matvey Rybalkin
 ******************************************************************************/

/** 
 * @brief Prints Light UII license text.
 * @param[in] str string address 
*/
void light_cout_license(void) {
    lccol(LC_COLOR_RED, LC_COLOR_BLACK);
    lcout(X("Light Unified Interaction Interface "));
    lccol(LC_COLOR_WHITE, LC_COLOR_BLACK);
    lcout(light_version_str);
    lccol(LC_COLOR_YELLOW, LC_COLOR_BLACK);
    lcout(X("\n"));
    lcout(X("Copyright © 2024 Matvey Rybalkin. GNU GPL-3.0\n"));
    lccol(LC_COLOR_WHITE, LC_COLOR_BLACK);
    lcout(X("As a part of "));
    lccol(LC_COLOR_WHITE, LC_COLOR_DARK_RED);
    lcout(X("/ Project L /\n"));
    lccol(LC_COLOR_WHITE, LC_COLOR_BLACK);
    lcout(X("This is free software; see the source for copying conditions.\n"));
    lcout(X("There is NO warranty;\n"));
    lcout(X("not even for MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.\n"));
}

#endif // LIGHT_UNIFIED_INTERACTION_INTARFACE_LICENSE_H__