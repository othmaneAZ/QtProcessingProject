#include "linearfilter.h"

#ifndef GREENCHANNEL
#define GREENCHANNEL

class GreenChannel : public LinearFilter {

public :
    explicit GreenChannel(FastImage* bufferIn);

};



#endif // GREENCHANNEL

