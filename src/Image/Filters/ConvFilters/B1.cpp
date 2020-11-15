#include "B1.h"

b1::b1(FastImage* bufferIn, FastImage* bufferOut) : ConvFilter(bufferIn, bufferOut) {
    int _intF = 11;
    //setFilter(10);
    setIntFilter(_intF);

}

void b1::applyB1(void) {
    applyFilter();
}

