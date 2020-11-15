#include "Convfilter.h"

#ifndef M8
#define M8


class m8 : public ConvFilter {
private :

public :
    //explicit M0(FastImage* bufferIn, FastImage* bufferOut, int _matrix[9], int _coeff);
    //explicit M0(FastImage* bufferIn, FastImage* bufferOut, int _intFilter, int _coeff);
    explicit m8(FastImage* bufferIn, FastImage* bufferOut);
    void applyM8(void);

};

#endif // M0F

