#include "greychannel.h"

GreyChannel::GreyChannel(FastImage* bufferIn) : LinearFilter(bufferIn) {
    double a = 0.33;
    double greyKernel[][3] = {{a, a, a}, {a, a, a}, {a, a, a}};
    setCoeffs(greyKernel);
}


