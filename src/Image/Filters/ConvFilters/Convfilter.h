#include "../filter.h"

#ifndef CONVFILTER
#define CONVFILTER


class ConvFilter : public Filter {
private :
    int intFilter;
    int *matrix;
    int coeff;

public :
    explicit ConvFilter(FastImage* bufferIn, FastImage* bufferOut, int _matrix[9]);
    explicit ConvFilter(FastImage* bufferIn, FastImage* bufferOut, int _intFilter);
    explicit ConvFilter(FastImage* bufferIn, FastImage* bufferOut);

    ~ConvFilter();

    void setIntFilter(int _intF);
    void setFilter(int _intFilter);
    void initMatrix(void);
    void setMatrix(int _matrix[9]);

    void adjustImage(void);
    void applyFilter();
};









#endif // CONVFILTER

