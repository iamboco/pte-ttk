#include <iostream>
#include <cmath>
#include "teglatest.h"

void Teglatest::TeglatestFelszin(){
     felsz=2*(a*b+b*c+c*a);
}

void Teglatest::TeglatestTerfogat(){
     terf=a*b*c;
}

double Teglatest::GetFelszin(){
       return felsz;
}

double Teglatest::GetTerfogat(){
       return terf;
}

double Teglatest::testatlo(){
       return sqrt(a*a+b*b+c*c);
}




Teglatest& Teglatest::operator=(const Teglatest& T){
          a=T.a;
          b=T.b;
          c=T.c;
          return *this;
}


bool Teglatest::operator == (const Teglatest& T) const{
     if((a==T.a)&&(b==T.b)&&(c==T.c)) return 1; else return 0;
}

bool Teglatest::operator != (const Teglatest& T) const{
     if((a==T.a)&&(b==T.b)&&(c==T.c)) return 0; else return 1;
}

Teglatest operator * (const  Teglatest& T,  const  int& szam){
       return Teglatest(T.a*szam, T.b*szam, T.c*szam);
}

ostream& operator << (ostream& os, const Teglatest& T){
       os<<"( "<<T.a<<" , "<<T.b<<" , "<<T.c<<" )";
}
