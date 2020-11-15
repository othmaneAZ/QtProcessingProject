#include "linearfilter.h"

#ifndef RELIABLEGREYCHANNEL
#define RELIABLEGREYCHANNEL

class ReliableGreyChannel : public LinearFilter {

public :
    explicit ReliableGreyChannel(FastImage* bufferIn);

};


#endif // RELIABLEGREYCHANNEL

