#include "linearfilter.h"


void LinearFilter::initCoeffs(void) {
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {
            coeffs[i][j] = 0;
        }
    }
}

void LinearFilter::setCoeffs(double _coeffs[][3]) {
    for (int i = 0; i<3; i++) {
        for (int j = 0; j<3; j++) {
            coeffs[i][j] = _coeffs[i][j];
        }
    }
}


LinearFilter::LinearFilter(FastImage* bufferIn) : Filter(bufferIn) {
    coeffs = new double[3][3];
    initCoeffs();
}


LinearFilter::~LinearFilter() {
    delete coeffs;
}

FastImage *LinearFilter::filter(void) {
    adjustImDimensions();
    int rVal, gVal, bVal;
    for(int y=0; y<bufferIn->height(); y++){
        for(int x=0; x<bufferIn->width(); x++){
            rVal = (int) coeffs[0][0]*imInR(y,x) + coeffs[0][1]*imInG(y,x) + coeffs[0][2]*imInB(y,x);
            gVal = (int) coeffs[1][0]*imInR(y,x) + coeffs[1][1]*imInG(y,x) + coeffs[1][2]*imInB(y,x);
            bVal = (int) coeffs[2][0]*imInR(y,x) + coeffs[2][1]*imInG(y,x) + coeffs[2][2]*imInB(y,x);

            imOutR(y, x, rVal);
            imOutG(y, x, gVal);
            imOutB(y, x, bVal);
        }
    }
    bufferOutToBufferIn();
    return bufferOut;
}


































