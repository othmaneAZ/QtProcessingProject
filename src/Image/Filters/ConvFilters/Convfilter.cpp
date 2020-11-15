#include "Convfilter.h"

void ConvFilter::initMatrix(void) {
    for (int j = 0; j < 9; j++) {
        matrix = new int[9];
        matrix[j] = 0;
    }
}

void ConvFilter::setMatrix(int _matrix[9]) {
    for (int j = 0; j < 9; j++) {
        matrix = new int[9];
        matrix[j] = _matrix[j];
    }
}

void ConvFilter::setIntFilter(int _intF){
    intFilter = _intF;
}


ConvFilter::ConvFilter(FastImage* bufferIn, FastImage* bufferOut, int _matrix[9]) : Filter(bufferIn, bufferOut) {
    coeff  = 1;
    setMatrix(_matrix);
    intFilter = 0;
}

ConvFilter::ConvFilter(FastImage* bufferIn, FastImage* bufferOut, int _intFilter) : Filter(bufferIn, bufferOut) {
    coeff = 1;
    setFilter(_intFilter);
    intFilter = _intFilter;
}

ConvFilter::ConvFilter(FastImage* bufferIn, FastImage* bufferOut) : Filter(bufferIn, bufferOut) {
    coeff = 1;
    initMatrix();
    intFilter = 0;
}


void ConvFilter::adjustImage(void) {
    // REDIMENTIONNEMENT SI NECESSAIRE DU BUFFER DE SORTIE...
    if( bufferOut->width() != bufferIn->width() || bufferOut->height() != bufferIn->height() ){
        bufferOut->resize(bufferIn->height(), bufferIn->width());
    }
}


void ConvFilter::setFilter(int _intFilter) {
    if (_intFilter == 0) {
        matrix[0] = 0; matrix[1] = 0; matrix[2] = 0;
        matrix[3] = 0; matrix[4] = 1; matrix[5] = 0;
        matrix[6] = 0; matrix[7] = 0; matrix[8] = 0;
        coeff = 1;
    } else if (_intFilter == 1) { // M2
        matrix[0] = 0; matrix[1] = 0;  matrix[2] = 0;
        matrix[3] = 0; matrix[4] = 0;  matrix[5] = 0;
        matrix[6] = 0; matrix[7] = 0;  matrix[8] = 0;
        coeff = 1;
    } else if (_intFilter == 2) {  // M2
        matrix[0] = -1; matrix[1] = 0;  matrix[2] = 1;
        matrix[3] = -2; matrix[4] = 0;  matrix[5] = 2;
        matrix[6] = -1; matrix[7] = 0;  matrix[8] = 1;
        coeff = 1;
    } else if (_intFilter == 3) {  // M3
        matrix[0] = -1; matrix[1] = 0;  matrix[2] = 1;
        matrix[3] = -1; matrix[4] = 0;  matrix[5] = 1;
        matrix[6] = -1; matrix[7] = 0;  matrix[8] = 1;
        coeff = 1;
    } else if (_intFilter == 4) {  // M4
        matrix[0] = -1; matrix[1] = -2;  matrix[2] = -1;
        matrix[3] = 0; matrix[4] = 0;  matrix[5] = 0;
        matrix[6] = 1; matrix[7] = 2;  matrix[8] = 1;
        coeff = 1;
    } else if (_intFilter == 5) {   // M5
        matrix[0] = -1; matrix[1] = -1;  matrix[2] = -1;
        matrix[3] = 0; matrix[4] = 0;  matrix[5] = 0;
        matrix[6] = 1; matrix[7] = 1;  matrix[8] = 1;
        coeff = 1;
    } else if (_intFilter == 6) {  // M6
        matrix[0] = 0; matrix[1] = -1;  matrix[2] = 0;
        matrix[3] = -1; matrix[4] = 4;  matrix[5] = -1;
        matrix[6] = 0; matrix[7] = -1; matrix[8] = 0;
        coeff = 1;
    } else if (_intFilter == 7) {  // M7
        matrix[0] = -1; matrix[1] = -1; matrix[2] = -1;
        matrix[3] = -1; matrix[4] = 8 ; matrix[5] = -1;
        matrix[6] = -1; matrix[7] = -1; matrix[8] = -1;
        coeff = 1;
    } else if (_intFilter == 8) { // M8
        matrix[0] = -1; matrix[1] = -2; matrix[2] = -1;
        matrix[3] = -2; matrix[4] = 12; matrix[5] = -2;
        matrix[6] = -1; matrix[7] = -2; matrix[8] = -1;
        coeff = 1;
    } else if (_intFilter == 9) {   // M9
        matrix[0] = -1; matrix[1] = -1; matrix[2] = 0;
        matrix[3] = -1; matrix[4] =  0; matrix[5] = 1;
        matrix[6] =  0; matrix[7] =  1; matrix[8] = 1;
        coeff = 1;
    } else if (_intFilter == 10) {   // b0
        matrix[0] =  0; matrix[1] = 1; matrix[2] = 0;
        matrix[3] = 1; matrix[4] = 4; matrix[5] = 1;
        matrix[6] =  0; matrix[7] = 1; matrix[8] =  0;
        coeff = 8;
    } else if (_intFilter == 11) {   // b11/8
        matrix[0] = 1 ; matrix[1] = 2; matrix[2] = 1;
        matrix[3] = 2 ; matrix[4] = 8; matrix[5] = 2;
        matrix[6] = 1 ; matrix[7] = 2; matrix[8] = 1;
        coeff = 16;
    } else if (_intFilter == 12) {   // b2
        matrix[0] = 1; matrix[1] = 1; matrix[2] = 1;
        matrix[3] = 1; matrix[4] = 1; matrix[5] = 1;
        matrix[6] = 1; matrix[7] = 1; matrix[8] = 1;
        coeff = 9;
    } else if (_intFilter == 13) {   // b3
        matrix[0] = 0; matrix[1] = 0; matrix[2] = 0;
        matrix[3] = 0; matrix[4] = 1; matrix[5] = 0;
        matrix[6] = 0; matrix[7] = 0; matrix[8] = 0;
        coeff = 1;

    }else {
        matrix[0] = 1; matrix[1] = 1; matrix[2] = 1;
        matrix[3] = 1; matrix[4] =  0; matrix[5] = 1;
        matrix[6] = 1; matrix[7] = 1; matrix[8] = 1;
        coeff = 8;
        cout<< "Sorry, 0 definition of this filter !" << endl;
    }
}


void ConvFilter::applyFilter()
{
    setFilter(intFilter);
    cout << intFilter << endl;
    cout << coeff << matrix[0] << matrix[1] << matrix[2] << endl;
    adjustImage();
    for(int y = 0; y < bufferIn->height(); y++)
        for(int x= 0; x< 4 * bufferIn->width(); x++)
        {
            if(y == 0 || x== 0 || y == bufferIn->height() - 1 || x== 4 * (bufferIn->width() - 1) || ((x== 1 || x== 2 || (x== 4*(bufferIn->width()- 1) + 1 || (x== 4 * (bufferIn->width() - 1) + 2))))) {
                bufferOut->Red(y,x, bufferIn->Red(y,x));
                bufferOut->Blue(y,x, bufferIn->Blue(y,x));
                bufferOut->Green(y,x, bufferIn->Green(y,x));
            }else
            {
            int R = matrix[0] * bufferIn->Red(y-1,x-1) +
                    matrix[1] * bufferIn->Red(y-1,x) +
                    matrix[2] * bufferIn->Red(y-1,x+1) +
                    matrix[3] * bufferIn->Red(y,x-1)+
                    matrix[4] * bufferIn->Red(y,x) +
                    matrix[5] * bufferIn->Red(y,x+1) +
                    matrix[6] * bufferIn->Red(y+1,x-1) +
                    matrix[7] * bufferIn->Red(y+1,x) +
                    matrix[8] * bufferIn->Red(y+1,x+1);
            //int intR = (int)(floor(R));
            //cout << "Valeur du Rouge après convolution " << intR << endl;
            int fR = R / coeff ;
            bufferOut->Red(y,x,fR);


            int B = matrix[0] * bufferIn->Blue(y-1,x-1) +
                    matrix[1] * bufferIn->Blue(y-1,x) +
                    matrix[2] * bufferIn->Blue(y-1,x+1) +
                    matrix[3] * bufferIn->Blue(y,x-1)+
                    matrix[4] * bufferIn->Blue(y,x) +
                    matrix[5] * bufferIn->Blue(y,x+1) +
                    matrix[6] * bufferIn->Blue(y+1,x-1) +
                    matrix[7] * bufferIn->Blue(y+1,x) +
                    matrix[8] * bufferIn->Blue(y+1,x+1);
            //int intB = (int)(floor(B));
            //cout << "Valeur du Blue après convolution " << intB << endl;
            int fB = B / coeff ;
            bufferOut->Blue(y,x,fB);



           int G =  matrix[0] * bufferIn->Green(y-1,x-1) +
                    matrix[1] * bufferIn->Green(y-1,x) +
                    matrix[2] * bufferIn->Green(y-1,x+1) +
                    matrix[3] * bufferIn->Green(y,x-1)+
                    matrix[4] * bufferIn->Green(y,x) +
                    matrix[5] * bufferIn->Green(y,x+1) +
                    matrix[6] * bufferIn->Green(y+1,x-1) +
                    matrix[7] * bufferIn->Green(y+1,x) +
                    matrix[8] * bufferIn->Green(y+1,x+1);
           //int intG = (int)(floor(V));
           //cout << "Valeur du Vert après convolution " << intG << endl;
           int fG = G / coeff ;
           bufferOut->Green(y,x,fG);

            }
        }
}



ConvFilter::~ConvFilter() {
    delete matrix;
}
