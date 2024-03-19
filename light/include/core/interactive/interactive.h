#ifndef LIGHT_UNIFIED_INTERACTION_INTARFACE_CORE_INTERACTIVE_H__
#define LIGHT_UNIFIED_INTERACTION_INTARFACE_CORE_INTERACTIVE_H__

/**************************************************************************//**
 * @file     interactive.h
 * @brief    Project L - Light unified interaction interface. Interactive.
 * @version  V0.0.1
 * @date     17. Jan 2024
 * @author   Matvey Rybalkin
 ******************************************************************************/

lm light_interactive(void) {
    lc* interactive_buffer = lmalloc(sizeof(lc) * 100);
    note_interactive();
    note_you_interactive();
    while(1) {

    }
    free(interactive_buffer);
    bye_light();
    return L_EXIT_SUCCESS;
}

#endif // LIGHT_UNIFIED_INTERACTION_INTARFACE_CORE_INTERACTIVE_H__ 