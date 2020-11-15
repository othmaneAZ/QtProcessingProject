#include "M1.h"

m1::m1(FastImage* bufferIn, FastImage* bufferOut) : ConvFilter(bufferIn, bufferOut) {
    int _intF = 1;
    //setFilter(1);
    setIntFilter(_intF);
}

void m1::applyM1(void) {
    applyFilter();
}

