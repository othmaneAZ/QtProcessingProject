#include "Convfilter.h"

#ifndef M7
#define M7


class m7 : public ConvFilter {
private :

public :
    //explicit M0(FastImage* bufferIn, FastImage* bufferOut, int _matrix[9], int _coeff);
    //explicit M0(FastImage* bufferIn, FastImage* bufferOut, int _intFilter, int _coeff);
    explicit m7(FastImage* bufferIn, FastImage* bufferOut);
    void applyM7(void);

};

#endif // M0F

