#include "M4.h"

m4::m4(FastImage* bufferIn, FastImage* bufferOut) : ConvFilter(bufferIn, bufferOut) {
    int _intF = 4;
    //setFilter(4);
    setIntFilter(_intF);
}

void m4::applyM4(void) {
    applyFilter();
}

