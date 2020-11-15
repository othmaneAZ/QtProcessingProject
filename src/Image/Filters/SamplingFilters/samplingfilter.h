#include "../filter.h"
#include <cmath>

#ifndef SAMPLINGFILTER
#define SAMPLINGFILTER

class SamplingFilter : public Filter {

public :
    explicit SamplingFilter(FastImage* _bufferIn);

    ~SamplingFilter();

    void reduceImSize(void); // Decrease Image Size
    void increaseImSize(void); // Increase Image Size

};





#endif // SAMPLINGFILTER

