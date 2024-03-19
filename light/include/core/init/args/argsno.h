#ifndef LIGHT_UNIFIED_INTERACTION_INTARFACE_CORE_INIT_ARGSNO_H__
#define LIGHT_UNIFIED_INTERACTION_INTARFACE_CORE_INIT_ARGSNO_H__

/**************************************************************************//**
 * @file     argsno.h
 * @brief    Project L - Light unified interaction interface. Core / init / argsno.h
 * @version  V0.0.1
 * @date     14. Jan 2024
 * @author   Matvey Rybalkin
 ******************************************************************************/

/**
 * @brief Light args list type.
*/
typedef enum {
    /* General args */
    LIGHT_ARGS_HELP,
    LIGHT_ARGS_VERSION,
    LIGHT_ARGS_LICENSE,

    /* Tasks args */
    LIGHT_ARGS_TASK_NEW,

    /* 'NEW' subtypes */
    
    /* Projects: */
    LIGHT_ARGS_TASK_NEW_C_PROJECT,
    LIGHT_ARGS_TASK_NEW_CPP_PROJECT,
    LIGHT_ARGS_TASK_NEW_LENA_PROJECT,
    LIGHT_ARGS_TASK_NEW_VERTEX_3_PROJECT,
    LIGHT_ARGS_TASK_NEW_VERTEX_4_PROJECT,
    LIGHT_ARGS_TASK_NEW_VERTEX_4_POLARIS_PROJECT,

    /* Extensions: */
    LIGHT_ARGS_TASK_NEW_LENA_EXTENSION,
    LIGHT_ARGS_TASK_NEW_VERTEX_3_EXTENSION,
    LIGHT_ARGS_TASK_NEW_VERTEX_4_EXTENSION,

} light_args_t;

/**
 * @brief Light args keyword tokens type.
*/
typedef enum {
    /* General args */
    LIGHT_ARGS_TOKEN_HELP,
    LIGHT_ARGS_TOKEN_VERSION,
    LIGHT_ARGS_TOKEN_LICENSE,

    /* Tasks args */
    LIGHT_ARGS_TOKEN_TASK_NEW,

    /* 'NEW' subtypes */
    LIGHT_ARGS_TOKEN_PROJECT,
    LIGHT_ARGS_TOKEN_EXTENSION,

    /* Languages and frameworks */
    LIGHT_ARGS_TOKEN_C,
    LIGHT_ARGS_TOKEN_CPP,
    LIGHT_ARGS_TOKEN_LENA,
    LIGHT_ARGS_TOKEN_VERTEX_3,
    LIGHT_ARGS_TOKEN_VERTEX_4,
    LIGHT_ARGS_TOKEN_VERTEX_4_POLARIS,

    /* Undefined */
    LIGHT_ARGS_TOKEN_UNDEFINED,
} light_args_kw_tokens_t;


/**
 * @brief Light args keyword list.
*/
lc* light_args_kw_list[] = {
    /* General args */
    X("--help"),
    X("--version"),
    X("--license"),

    /* New */
    X("new"),

    /* 'NEW' subtypes */
    X("project"),
    X("extension"),

    /* Languages and frameworks */
    X("c"),
    X("cpp"),
    X("lena"),
    X("vertex-3"),
    X("vertex-4"),
    X("vertex-4-polaris"),

};

#define KEYWORD_LENGHT  12U
#define ARGS_MAX_AMOUNT 10U

#endif // LIGHT_UNIFIED_INTERACTION_INTARFACE_CORE_INIT_ARGSNO_H__