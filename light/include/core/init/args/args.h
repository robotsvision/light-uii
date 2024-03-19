#ifndef LIGHT_UNIFIED_INTERACTION_INTARFACE_CORE_INIT_ARGS_H__
#define LIGHT_UNIFIED_INTERACTION_INTARFACE_CORE_INIT_ARGS_H__

/**************************************************************************//**
 * @file     args.h
 * @brief    Project L - Light unified interaction interface. Core / init / args.h
 * @version  V0.0.1
 * @date     14. Jan 2024
 * @author   Matvey Rybalkin
 ******************************************************************************/

/* Include args supported list */
#include "argsno.h"

lm light_args(lu32 argc, lc* argv[]) {
    if (argc > ARGS_MAX_AMOUNT) {
        light_error(X("Flags amount exceeded!\n"));
    }
    light_args_kw_tokens_t* token_list = lmalloc(sizeof(light_args_kw_tokens_t) * 10);
    uint8_t token_index = 0;
    range(i, 1, argc) {
        range(j, 0, KEYWORD_LENGHT) {
            if (lscmp(argv[i], light_args_kw_list[j])) {
                token_list[token_index] = j;
                break;
            } else {
                token_list[token_index] = LIGHT_ARGS_TOKEN_UNDEFINED;
                if (token_index == 0) {
                    light_error(X("Invalid args sequence!"));
                    free(token_list);
                    bye_light();
                    return L_EXIT_FAILURE;
                }
            }
            ++token_index;
        }
    }
    range(i, 0, token_index) {
        printf("%d", token_list[i]);
    }
    free(token_list);
    bye_light();
    return L_EXIT_SUCCESS;
}

#endif // LIGHT_UNIFIED_INTERACTION_INTARFACE_CORE_INIT_ARGS_H__