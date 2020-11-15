#include "samplingfilter.h"

#ifndef LINEARDOWNSAMPLE
#define LINEARDOWNSAMPLE

class LinearDownSample : public SamplingFilter {

public :
    explicit LinearDownSample(FastImage* bufferIn);
    FastImage* filter(void);
};


#endif // LINEARDOWNSAMPLE

