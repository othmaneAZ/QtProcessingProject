#include "M2.h"

m2::m2(FastImage* bufferIn, FastImage* bufferOut) : ConvFilter(bufferIn, bufferOut) {
    int _intF = 2;
    //setFilter(2);
    setIntFilter(_intF);
}

void m2::applyM2(void) {
    applyFilter();
}

