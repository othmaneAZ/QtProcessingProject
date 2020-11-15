#include "M9.h"

m9::m9(FastImage* bufferIn, FastImage* bufferOut) : ConvFilter(bufferIn, bufferOut) {
    int _intF = 9;
    //setFilter(9);
    setIntFilter(_intF);
}

void m9::applyM9(void) {
    applyFilter();
}

