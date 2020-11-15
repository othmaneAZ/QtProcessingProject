#include "Convfilter.h"

#ifndef M2
#define M2


class m2 : public ConvFilter {
private :

public :
    //explicit M0(FastImage* bufferIn, FastImage* bufferOut, int _matrix[9], int _coeff);
    //explicit M0(FastImage* bufferIn, FastImage* bufferOut, int _intFilter, int _coeff);
    explicit m2(FastImage* bufferIn, FastImage* bufferOut);
    void applyM2(void);

};

#endif // M2F

