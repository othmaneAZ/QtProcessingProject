#include "M3.h"

m3::m3(FastImage* bufferIn, FastImage* bufferOut) : ConvFilter(bufferIn, bufferOut) {
    int _intF = 3;
    //setFilter(3);
    setIntFilter(_intF);
}

void m3::applyM3(void) {
    applyFilter();
}

