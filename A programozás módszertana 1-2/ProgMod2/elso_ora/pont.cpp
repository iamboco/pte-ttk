//az osztály megvalósitása
#include<iostream>
#include "pont.h"
void Pont::setX(double xx){           //:: --> hatókör operáta (scope operator)
    x=xx;
    }
void Pont::setY(double yy){
    y=yy;
    }

double Pont::getX()const{
    return x;
    }
double Pont::getY()const{
    return y;
    }

