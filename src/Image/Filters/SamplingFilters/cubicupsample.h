#include "samplingfilter.h"

#ifndef CUBICUPSAMPLE
#define CUBICUPSAMPLE

class CubicUpSample : public SamplingFilter {

public :
    explicit CubicUpSample(FastImage* bufferIn);
    FastImage* filter(void);
};


#endif // CUBICUPSAMPLE

