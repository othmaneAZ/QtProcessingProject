#include "blur.h"

/*
Blur::~Blur() {}


Blur::Blur(FastImage* _bufferIn, FastImage* (*_previousFrames)) : UniversalBlur(_bufferIn, 2, _previousFrames) {
    double tmpCoeffs[] = {0.5, 0.3, 0.2};
    setCoeffs(tmpCoeffs);
}

*/

Blur::~Blur() {
    delete previousBuffer1;
    delete previousBuffer2;
}

Blur::Blur(FastImage *_bufferIn, FastImage* _previousBuffer1, FastImage* _previousBuffer2) : Filter(_bufferIn) {
    previousBuffer1 = new FastImage(_previousBuffer1);
    previousBuffer2 = new FastImage(_previousBuffer2);
}

FastImage* Blur::filter(void) {
    int rVal, gVal, bVal;
    for(int y=0; y<bufferIn->height(); y++){
        for(int x=0; x<bufferIn->width(); x++){
                rVal = (int) 0.5*bufferIn->Red(y, x) + 0.3*previousBuffer1->Red(y, x) + 0.2*previousBuffer2->Red(y, x);
                gVal = (int) 0.5*bufferIn->Green(y, x) + 0.3*previousBuffer1->Green(y, x) + 0.2*previousBuffer2->Green(y, x);
                bVal = (int) 0.5*bufferIn->Blue(y, x) + 0.3*previousBuffer1->Blue(y, x) + 0.2*previousBuffer2->Blue(y, x);

            imOutR(y, x, rVal);
            imOutG(y, x, gVal);
            imOutB(y, x, bVal);
        }
    }

    bufferOutToBufferIn();
    return bufferOut;
}


