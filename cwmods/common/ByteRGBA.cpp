#include "ByteRGBA.h"

ByteRGBA::ByteRGBA(){
    this->red = 255;
    this->green = 255;
    this->blue = 255;
    this->alpha = 255;
}

ByteRGBA::ByteRGBA(char red, char green, char blue, char alpha){
    this->red = red;
    this->green = green;
    this->blue = blue;
    this->alpha = alpha;
}
