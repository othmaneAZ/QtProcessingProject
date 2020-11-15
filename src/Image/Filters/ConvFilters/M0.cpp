#include "M0.h"

m0::m0(FastImage* bufferIn, FastImage* bufferOut) : ConvFilter(bufferIn, bufferOut) {
    int _intF = 0;
    //setFilter(0);
    setIntFilter(_intF);
}

void m0::applyM0(void) {
    applyFilter();
}

