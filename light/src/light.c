#include <light.h>

lm lmain(lu32 argc, lc* argv[]) {
    if (llibs_init() != L_OK) {
        lexit(L_EXIT_FAILURE);
    }
    lcout(X("Привет мультиязычный мир!"));
    lexit(L_EXIT_SUCCESS);
}