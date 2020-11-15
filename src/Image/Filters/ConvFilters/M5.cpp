#include "M5.h"

m5::m5(FastImage* bufferIn, FastImage* bufferOut) : ConvFilter(bufferIn, bufferOut) {
    int _intF = 5;
    //setFilter(5);
    setIntFilter(_intF);
}

void m5::applyM5(void) {
    applyFilter();
}

