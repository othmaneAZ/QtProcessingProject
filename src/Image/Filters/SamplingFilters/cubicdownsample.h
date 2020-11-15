#include "samplingfilter.h"

#ifndef CUBICDOWNSAMPLE
#define CUBICDOWNSAMPLE


class CubicDownSample : public SamplingFilter {

public :
    explicit CubicDownSample(FastImage* bufferIn);
    FastImage* filter(void);
};


#endif // CUBICDOWNSAMPLE

