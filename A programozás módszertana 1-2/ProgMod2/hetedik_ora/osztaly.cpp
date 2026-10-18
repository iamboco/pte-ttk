#include <iostream>
#include "osztaly.h"

using namespace std;

Alap::Alap(double x1, double y1){
          x = x1;
          y = y1;
          ered = 0.0;
}

void Alap::szamol() { ered = x + y; }

void Alap::kiir() { cout<<"Eredmeny = "<<ered<<endl; }




Szarm::Szarm(double x1, double y1) : Alap(x1, y1) {}

void Szarm::szamol(){ ered = x * y; }
