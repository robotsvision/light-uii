#ifndef LIGHT_UNIFIED_INTERACTION_INTARFACE_CORE_INIT_ARGSNO_H__
#define LIGHT_UNIFIED_INTERACTION_INTARFACE_CORE_INIT_ARGSNO_H__

/**************************************************************************//**
 * @file     args.h
 * @brief    Project L - Light unified interaction interface. Core / init / argsno.h
 * @version  V0.0.1
 * @date     14. Jan 2024
 * @author   Matvey Rybalkin
 ******************************************************************************/

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
    LIGHT_ARGS_TASK_NEW_VERTEX_4_PROJECT,
    LIGHT_ARGS_TASK_NEW_VERTEX_4_POLARIS_PROJECT,
    LIGHT_ARGS_TASK_NEW_VERTEX3_PROJECT,

    /* Extensions: */
    LIGHT_ARGS_TASK_NEW_LENA_EXTENSION,
    LIGHT_ARGS_TASK_NEW_VERTEX4_EXTENSION,
    LIGHT_ARGS_TASK_NEW_VERTEX3_EXTENSION,

} light_args_t;

#endif // LIGHT_UNIFIED_INTERACTION_INTARFACE_CORE_INIT_ARGSNO_H__