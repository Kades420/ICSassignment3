#ifndef LEMON_H
#define LEMON_H
#include "citrus.h"
class Lemon : public CitrusFruit {
public:
Lemon(float ph) : CitrusFruit(ph){}
const char * getName(){ return "Lemon Fruit";}
float getPh();
};
#endif