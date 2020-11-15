#include "bluechannel.h"

BlueChannel::BlueChannel(FastImage* bufferIn) : LinearFilter(bufferIn) {
    double blueKernel[][3] = {{0, 0, 0}, {0, 0, 0}, {0, 0, 1}};
    setCoeffs(blueKernel);
}



