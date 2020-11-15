#include <iostream>
#include <opencv/cv.h>
#include <opencv/highgui.h>
#include "../FImage.h"

using namespace std;

#ifndef FILTER
#define FILTER

#define imInR(y, x) ((float)bufferIn->Red(y, x))
#define imInG(y, x) ((float)bufferIn->Green(y, x))
#define imInB(y, x) ((float)bufferIn->Blue(y, x))

#define imOutR(y, x, v) bufferOut->Red(y, x, v)
#define imOutG(y, x, v) bufferOut->Green(y, x, v)
#define imOutB(y, x, v) bufferOut->Blue(y, x, v)


class Filter {
protected :
    FastImage* bufferIn;
    FastImage* bufferOut;

public :
    //Filter() {}
    Filter(FastImage* _bufferIn, FastImage* _bufferOut);
    Filter(FastImage* _bufferIn);
    void adjustImDimensions(void);
    void exportImOut(FastImage* imOut);
    void bufferOutToBufferIn(void);
};











#endif // FILTER

