#include "samplingfilter.h"

#define RESIZE_FACTOR 2
SamplingFilter::~SamplingFilter() {}

SamplingFilter::SamplingFilter(FastImage* _bufferIn) : Filter(_bufferIn) {}


void SamplingFilter::reduceImSize(void) {
    // Dicrease Image Size
    int new_height = ceil((bufferIn->height())/RESIZE_FACTOR);
    int new_width  = ceil((bufferIn->width())/RESIZE_FACTOR);
    bufferOut->resize(new_height, new_width);
}

void SamplingFilter::increaseImSize(void) {
    // Increase Image Size
    int new_height = ((bufferIn->height())*RESIZE_FACTOR);
    int new_width  = ((bufferIn->width() )*RESIZE_FACTOR);
    bufferOut->resize(new_height, new_width);
}




