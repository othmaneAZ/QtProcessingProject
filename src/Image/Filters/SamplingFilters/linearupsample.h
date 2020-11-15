#include "samplingfilter.h"

#ifndef LINEARUPSAMPLE
#define LINEARUPSAMPLE

class LinearUpSample : public SamplingFilter {

public :
    explicit LinearUpSample(FastImage* bufferIn);
    FastImage* filter(void);
};

#endif // LINEARUPSAMPLE

