#include "linearfilter.h"

#ifndef REDCHANNEL
#define REDCHANNEL

class RedChannel : public LinearFilter {

public :
    explicit RedChannel(FastImage* bufferIn);

};




#endif // REDCHANNEL

