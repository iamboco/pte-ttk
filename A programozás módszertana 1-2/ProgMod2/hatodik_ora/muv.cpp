#include <iostream>
#include <cmath>
#include "muv.h"

using namespace std;

void Muvelet::hibaJelzes(){
     if(a<0) { cerr<<"Az elso adattag negativ."<<endl; a*=-1; }
     if(b<0) { cerr<<"A masodik adattag negativ."<<endl; b*=-1; }
}

Muvelet::Muvelet(double a1, double b1) {
     a=a1;
     b=b1;
     hibaJelzes();
     szamol();
     hatvanyoz();
}

void Muvelet::szamol() {
     ered=(a+b)/2.0;
}

void Muvelet::hatvanyoz() {
     hatvany=pow(a,b);
}

void Muvelet::kiir() {
     cout<<ered<<endl;
}

//---------------------------------------------------------------------

UjMuvelet::UjMuvelet(double a1, double b1, int jel1):Muvelet(a1,b1){
     // (meghívja az õsosztály konstruktorát)
     jel=jel1;
     szamol();
} 

void UjMuvelet::szamol() {
     if(jel) {ered=sqrt(a*b);}
             else {ered=2.0/(1.0/a+1.0/b);}
}

void UjMuvelet::kiir() {
     cout<<jel<<" "<<ered<<endl;
}
