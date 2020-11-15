#include "../filter.h"

#ifndef LINEARFILTER
#define LINEARFILTER


class LinearFilter : public Filter {
private :
    double (*coeffs)[3];

public :
    explicit LinearFilter(FastImage* bufferIn);

    ~LinearFilter();

    void initCoeffs(void);
    void setCoeffs(double _Coeffs[][3]);

    FastImage* filter();
};









#endif // LINEARFILTER

