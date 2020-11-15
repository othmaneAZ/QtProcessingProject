#include "Convfilter.h"

#ifndef M
#define M


class m6 : public ConvFilter {
private :

public :
    //explicit M0(FastImage* bufferIn, FastImage* bufferOut, int _matrix[9], int _coeff);
    //explicit M0(FastImage* bufferIn, FastImage* bufferOut, int _intFilter, int _coeff);
    explicit m6(FastImage* bufferIn, FastImage* bufferOut);
    void applyM6(void);

};

#endif // M0F

