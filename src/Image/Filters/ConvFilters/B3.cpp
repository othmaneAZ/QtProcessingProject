#include "B3.h"

b3::b3(FastImage* bufferIn, FastImage* bufferOut) : ConvFilter(bufferIn, bufferOut) {
    int _intF = 13;
    //setFilter(13);
    setIntFilter(_intF);
}

void b3::applyB3(void) {
    applyFilter();
}

