#include "Convfilter.h"

#ifndef M5
#define M5


class m5 : public ConvFilter {
private :

public :
    //explicit M0(FastImage* bufferIn, FastImage* bufferOut, int _matrix[9], int _coeff);
    //explicit M0(FastImage* bufferIn, FastImage* bufferOut, int _intFilter, int _coeff);
    explicit m5(FastImage* bufferIn, FastImage* bufferOut);
    void applyM5(void);

};

#endif // M0F

