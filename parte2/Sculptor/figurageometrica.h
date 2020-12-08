#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include "sculptor.h"

class FiguraGeometrica{
protected:
    float r,g,b,a;
public:
    virtual ~FiguraGeometrica(){};
    virtual void draw(Sculptor &s)=0;
    FiguraGeometrica(); // construtor padrão FiguraGeometrica para poder usá-lo em figugeomatrica.cpp


};

#endif // FIGURAGEOMETRICA_H
