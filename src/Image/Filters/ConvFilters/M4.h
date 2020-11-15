#include "Convfilter.h"

#ifndef M4
#define M4


class m4 : public ConvFilter {
private :

public :
    //explicit M0(FastImage* bufferIn, FastImage* bufferOut, int _matrix[9], int _coeff);
    //explicit M0(FastImage* bufferIn, FastImage* bufferOut, int _intFilter, int _coeff);
    explicit m4(FastImage* bufferIn, FastImage* bufferOut);
    void applyM4(void);

};

#endif // M0F

