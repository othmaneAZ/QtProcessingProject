#include "greenchannel.h"

GreenChannel::GreenChannel(FastImage* bufferIn) : LinearFilter(bufferIn) {
    double greenKernel[][3] = {{0, 0, 0}, {0, 1, 0}, {0, 0, 0}};
    setCoeffs(greenKernel);
}

