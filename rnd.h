#ifndef __rnd__
#define __rnd__

#include <cstdlib>

//------------------------------------------------------------------------------
// rnd.h - содержит генераторы случайных чисел для разных величин
//------------------------------------------------------------------------------

inline auto Random() {
    return rand() % 20 + 1;
}

inline auto RandomDisplacement() {
    return rand() % 50000 + 10;
}

inline auto RandomSpeed() {
    return rand() % 500 + 1;
}

inline auto RandomDistance() {
    return rand() % 10000 + 1 + (double) rand() / RAND_MAX;
}

inline auto RandomShipType() {
    return rand() % 3 + 1;
}

#endif //__rnd__
