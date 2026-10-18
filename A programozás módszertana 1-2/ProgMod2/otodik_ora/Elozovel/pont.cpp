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

double dist(const Pont& A, const Pont &B) {
       double x1=A.getX()-B.getX();
       double y1=A.getY()-B.getY();
       return sqrt(x1*x1+y1*y1);
       }

double Pont::d(const Pont& P)const{

    double x1=  x  -P.getX();
    double y1=  y  -P.getY();
    return sqrt(x1*x1+y1*y1);
    }

double Pont::d()const{
    return sqrt(x*x+y*y);
    }

Pont Pont::felezo(const Pont& B)const{
     Pont fel;
     fel.x=(x+B.getX())/2.0;
     fel.y=(y+B.getY())/2.0;
     return fel;
}

Pont Pont::felezo()const{
     Pont fel;
     fel.x=x/2.0;
     fel.y=y/2.0;
     return fel;
}

void Pont::kiir(){
     cout<<"( "<<x<<" , "<<y<<" )"<<endl;
}

Pont Pont::felezo(const Pont& B, double m, double n)const{
     double fx=( x*m + (B.getX())*n )/(m+n);
     double fy=( y*m + (B.getY())*n )/(m+n);
     return Pont(fx,fy);
}


Pont& Pont::operator = (const Pont& A) {
      x=A.getX();
      y=A.getY();
      
      return *this;
}

bool Pont::operator == (const Pont& A)const{
     
     if((x==A.getX())&&(y==A.getY())) return 1; else return 0;
}

bool Pont::operator != (const Pont& A)const{
     if((x!=A.getX())||(y!=A.getY())) return 1; else return 0;
}

Pont Pont::operator + (const Pont& A)const{
     return Pont(x+A.getX(), y+A.getY());
}

Pont Pont::operator - (const Pont& A)const{
     return Pont(x-A.getX(), y-A.getY());
}

Pont Pont::operator - (const double& A)const{
     return Pont(x-A, y-A);
}

Pont Pont::operator + (const double& A)const{
     return Pont(x+A, y+A);
}

Pont Pont::operator * (const double& A)const{
     return Pont(x*A, y*A);
}

Pont& Pont::operator += (const Pont& A){
     x+=A.getX();
     y+=A.getY();
     return *this;
}

Pont Pont::operator ++ (){
      x+=1.0;
      y+=1.0;
      return Pont(x-1.0, y-1.0);
}

Pont& Pont::operator ++ (int){
      x+=1.0;
      y+=1.0;
      return *this;
}

Kor::Kor(double kx, double ky, double sug):Pont(kx,ky){
      sugar = sug;
      ker();
      ter();
}

void Kor::ter(){
      terulet = 3.14*sugar*sugar;
}

void Kor::ker(){
      kerulet = 3.14*2.0*sugar;
}

void Kor::kiir(){
      cout<<"Kerulet: "<<kerulet<<", terulet: "<<terulet<<endl;
}

double Kor::getSugar(){
       return sugar;
}

Gomb::Gomb(double x, double y, double sug):Kor(x,y,sug){
       sugar=sug;
       felsz();
       terf();
}

void Gomb::felsz(){
     felszin = 4.0*3.14*sugar*sugar;
}

void Gomb::terf(){
     terfogat = 4.0/3.0*3.14*sugar*sugar*sugar;
}

void Gomb::kiir(){
     cout<<"Felszin: "<<felszin<<", terfogat: "<<terfogat<<endl;
}
