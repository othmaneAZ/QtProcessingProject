#include "redchannel.h"

RedChannel::RedChannel(FastImage* bufferIn) : LinearFilter(bufferIn) {
    double redKernel[][3] = {{1, 0, 0}, {0, 0, 0}, {0, 0, 0}};
    setCoeffs(redKernel);
}


