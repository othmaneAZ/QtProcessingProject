#include "Convfilter.h"

#ifndef M0
#define M0


class m0 : public ConvFilter {
private :

public :
    //explicit M0(FastImage* bufferIn, FastImage* bufferOut, int _matrix[9], int _coeff);
    //explicit M0(FastImage* bufferIn, FastImage* bufferOut, int _intFilter, int _coeff);
    explicit m0(FastImage* bufferIn, FastImage* bufferOut);
    void applyM0(void);

};

#endif // M0F

