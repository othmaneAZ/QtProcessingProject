#include "M6.h"

m6::m6(FastImage* bufferIn, FastImage* bufferOut) : ConvFilter(bufferIn, bufferOut) {
    int _intF = 6;
    //setFilter(6);
    setIntFilter(_intF);
}

void m6::applyM6(void) {
    applyFilter();
}

