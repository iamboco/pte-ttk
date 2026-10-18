#include <iostream>
#include "osztaly.h"

using namespace std;

//virtual void Alakzat::szamol1(){}
//virtual void Alakzat::szamol2(){}
//virtual void Alakzat::kiir(){}

const double pi = 3.141592654;

Teglalap::Teglalap(double a1, double b1){
        a = a1;
        b = b1;
        ered1 = ered2 = 0.0;
}
void Teglalap::szamol1(){
     ered1 = 2 * (a+b);
}
void Teglalap::szamol2(){
     ered2 = a * b;
}
void Teglalap::kiir(){
     cout<<"Kerulet: "<<ered1<<" \t\t Terulet: "<<ered2<<endl;
}


Kor::Kor(double r1){
     r = r1;
}
void Kor::szamol1(){
     ered1 = 2 * r * pi;
}
void Kor::szamol2(){
     ered2 = r * r * pi;
}
void Kor::kiir(){
     cout<<"Kerulet: "<<ered1<<" \t Terulet: "<<ered2<<endl;
}
