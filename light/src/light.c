#include <light.h>

lm lmain(lu32 argc, lc* argv[]) {
    if (llibs_init() != L_OK) {
        return L_EXIT_FAILURE;
    }
    return light_run(argc, argv);
}