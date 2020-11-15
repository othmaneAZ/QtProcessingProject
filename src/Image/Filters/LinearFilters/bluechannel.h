#include "linearfilter.h"

#ifndef BLUECHANNEL
#define BLUECHANNEL


class BlueChannel : public LinearFilter {

public :
    explicit BlueChannel(FastImage* bufferIn);

};


#endif // BLUECHANNEL

