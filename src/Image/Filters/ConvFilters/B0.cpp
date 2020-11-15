#include "B0.h"

b0::b0(FastImage* bufferIn, FastImage* bufferOut) : ConvFilter(bufferIn, bufferOut) {
    int _intF = 10;
    //setFilter(10);
    setIntFilter(_intF);

}

void b0::applyB0(void) {
    applyFilter();
}

