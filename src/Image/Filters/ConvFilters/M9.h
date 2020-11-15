#include "Convfilter.h"

#ifndef M9
#define M9


class m9 : public ConvFilter {
private :

public :
    //explicit M0(FastImage* bufferIn, FastImage* bufferOut, int _matrix[9], int _coeff);
    //explicit M0(FastImage* bufferIn, FastImage* bufferOut, int _intFilter, int _coeff);
    explicit m9(FastImage* bufferIn, FastImage* bufferOut);
    void applyM9(void);

};

#endif // M0F

