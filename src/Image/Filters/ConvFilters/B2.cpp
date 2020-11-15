#include "B2.h"

b2::b2(FastImage* bufferIn, FastImage* bufferOut) : ConvFilter(bufferIn, bufferOut) {
    int _intF = 12;
    //setFilter(12);
    setIntFilter(_intF);

}

void b2::applyB2(void) {
    applyFilter();
}

