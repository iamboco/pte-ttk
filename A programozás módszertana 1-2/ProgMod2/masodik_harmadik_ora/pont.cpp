#include <iostream>
#include "pont.h"
#include <cmath>

void Pont::setX(double xx){
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
    
double Pont::dd(Pont xxx, Pont yyy){
    return sqrt( (pow(yyy.x-xxx.x,2)) + (pow(yyy.y-xxx.y,2)) );
    }

//Osztályon kívüli távolságmérés függvénye
double dist(const Pont& A, const Pont &B) {
       double x1=A.getX()-B.getX();
       double y1=A.getY()-B.getY();
       return sqrt(x1*x1+y1*y1);
       }


// 3. ÓRA

double Pont::d(const Pont& P)const{

    double x1=  x  -P.getX();
    double y1=  y  -P.getY();
    // benne vagyunk az objektumban, ezért elérjük x-et és y-t
    return sqrt(x1*x1+y1*y1);
    }

// Origótól vett távolság
// a név megegyezhet --- FÜGGVÉNYTÚLTERHELÉS (FUNCTION OVERLOADING)
double Pont::d()const{
    return sqrt(x*x+y*y);
    }

// Felezõpont meghatározása
Pont Pont::felezo(const Pont& B)const{
     Pont fel;
     fel.x=(x+B.getX())/2.0;
     fel.y=(y+B.getY())/2.0;
     // maradjunk típuson belül, ezért írjunk inkább 2.0-t
     return fel;
}

// Origótól vette felezõpont meghatározása (túlterhelés megint)
Pont Pont::felezo()const{
     Pont fel;
     fel.x=x/2.0;
     fel.y=y/2.0;
     return fel;
}

     // "::" -> nem elfelejteni!
void Pont::kiir(){
     cout<<"( "<<x<<" , "<<y<<" )"<<endl;
     // nem kell "fel." mert azt nem érjük el innen
     // itt az objektum, amire meghívjuk, már maga a felezõpont
}

//
Pont Pont::felezo(const Pont& B, double m, double n)const{
     double fx=( x*m + (B.getX())*n )/(m+n);
     double fy=( y*m + (B.getY())*n )/(m+n);
     return Pont(fx,fy);
}

