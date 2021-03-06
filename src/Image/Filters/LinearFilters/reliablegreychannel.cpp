#include "reliablegreychannel.h"

ReliableGreyChannel::ReliableGreyChannel(FastImage* bufferIn) : LinearFilter(bufferIn) {
    double a = 0.299; double b = 0.587; double c = 0.114;
    double reliableGreyKernel[][3] = {{a, b, c}, {a, b, c}, {a, b, c}};
    setCoeffs(reliableGreyKernel);
}

