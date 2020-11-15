#include "filter.h"


Filter::Filter(FastImage* _bufferIn) {
    bufferIn = new FastImage(_bufferIn);
    bufferOut = new FastImage(_bufferIn);
}

Filter::Filter(FastImage* _bufferIn, FastImage* _bufferOut){
    bufferIn = new FastImage(_bufferIn);
    bufferOut = new FastImage(_bufferOut);
}

void Filter::exportImOut(FastImage* imOut) {
    imOut->resize(bufferOut->height(), bufferOut->width());
    imOut->FastCopyTo( bufferOut );
}

void Filter::adjustImDimensions(void) {
    // REDIMENTIONNEMENT SI NECESSAIRE DU BUFFER DE SORTIE...
    if( bufferOut->width() != bufferIn->width() || bufferOut->height() != bufferIn->height() ){
        bufferOut->resize(bufferIn->height(), bufferIn->width());
    }
}

void  Filter::bufferOutToBufferIn(void) {
	delete bufferIn;
	bufferIn = new FastImage(bufferOut);	
}
