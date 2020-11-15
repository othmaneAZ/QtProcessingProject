#include "Convfilter.h"

#ifndef M3
#define M3


class m3 : public ConvFilter {
private :

public :
    //explicit M3(FastImage* bufferIn, FastImage* bufferOut, int _matrix[9], int _coeff);
    //explicit M3(FastImage* bufferIn, FastImage* bufferOut, int _intFilter, int _coeff);
    explicit m3(FastImage* bufferIn, FastImage* bufferOut);
    void applyM3(void);

};

#endif // M3F

