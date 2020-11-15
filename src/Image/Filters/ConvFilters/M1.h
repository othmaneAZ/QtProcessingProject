#include "Convfilter.h"

#ifndef M1
#define M1


class m1 : public ConvFilter {
private :

public :
    //explicit M0(FastImage* bufferIn, FastImage* bufferOut, int _matrix[9], int _coeff);
    //explicit M0(FastImage* bufferIn, FastImage* bufferOut, int _intFilter, int _coeff);
    explicit m1(FastImage* bufferIn, FastImage* bufferOut);
    void applyM1(void);

};

#endif // M0F

