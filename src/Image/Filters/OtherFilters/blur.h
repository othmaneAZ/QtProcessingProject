//#include "universalblur.h"
#include "../filter.h"

#ifndef BLUR
#define BLUR

/*class Blur : public UniversalBlur {

public :
    explicit Blur(FastImage* _bufferIn, FastImage* (*_previousFrames));
    ~Blur();
};*/

class Blur : public Filter {
private :
    FastImage* previousBuffer1;
    FastImage* previousBuffer2;
public :
    explicit Blur(FastImage* _bufferIn, FastImage* previousBuffer1, FastImage* previousBuffer2);
    ~Blur();
    FastImage* filter(void);
};

#endif // BLUR

