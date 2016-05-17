#ifndef CITRUSFRUIT_H
#define CITRUSFRUIT_H
class CitrusFruit{
protected:
float ph;
public:
CitrusFruit(float ph) : ph(ph){}
const char * getName(){ return "Citrus Fruit";}
float getPh();
};
#endif