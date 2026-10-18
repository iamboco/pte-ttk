//#include <cstdlib>
#include <iostream>
#include "muv.h"

using namespace std;

int main()
{
    /*
          Öröklés (inheritance)
          
    */
    
    double x,y;
    x = 3.0;
    y = -4.0;
    
    Muvelet w1(x,y);
    w1.kiir();
    
    UjMuvelet w2(x,y,1);
    w2.kiir();
    
    UjMuvelet w3(x,y,0);
    w3.kiir();
    
    system("PAUSE");
}
