#include "linearfilter.h"

#ifndef GREYCHANNEL
#define GREYCHANNEL

class GreyChannel : public LinearFilter {

public :
    explicit GreyChannel(FastImage* bufferIn);

};

#endif // GREYCHANNEL

