#include "M8.h"

m8::m8(FastImage* bufferIn, FastImage* bufferOut) : ConvFilter(bufferIn, bufferOut) {
    int _intF = 8;
    //setFilter(8);
    setIntFilter(_intF);
}

void m8::applyM8(void) {
    applyFilter();
}

