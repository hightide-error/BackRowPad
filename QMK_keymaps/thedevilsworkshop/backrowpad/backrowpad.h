#pragma once
#include "quantum.h"

#define LAYOUT( \
    k03, k02, k01, k00, k13, k12, k11, k10, k23, k22, k21, k20  \
    ) \
    { \
        { k00, k01, k02, k03}, \
        { k10, k11, k12, k13}, \
        { k20, k21, k22, k23} \
    }

