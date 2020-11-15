#include "samplingfilter.h"

#ifndef DOWNSAMPLE
#define DOWNSAMPLE


class DownSample : public SamplingFilter {

public :
    explicit DownSample(FastImage* bufferIn);
    FastImage* filter(void);
};


#endif // DOWNSAMPLE

