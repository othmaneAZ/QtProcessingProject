#include "samplingfilter.h"

#ifndef UPSAMPLE
#define UPSAMPLE

class UpSample : public SamplingFilter {

public :
    explicit UpSample(FastImage* _bufferIn);
    FastImage* filter(void);
};


#endif // UPSAMPLE

