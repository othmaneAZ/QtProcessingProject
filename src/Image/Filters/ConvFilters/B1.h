#include "Convfilter.h"

#ifndef B1
#define B1


class b1 : public ConvFilter {
private :

public :
    //explicit B1(FastImage* bufferIn, FastImage* bufferOut, int _matrix[9], int _coeff);
    //explicit B1(FastImage* bufferIn, FastImage* bufferOut, int _intFilter, int _coeff);
    explicit b1(FastImage* bufferIn, FastImage* bufferOut);
    void applyB1(void);

};

#endif // B1F

