#include "M7.h"

m7::m7(FastImage* bufferIn, FastImage* bufferOut) : ConvFilter(bufferIn, bufferOut) {
    int _intF = 7;
    //setFilter(7);
    setIntFilter(_intF);
}

void m7::applyM7(void) {
    applyFilter();
}

