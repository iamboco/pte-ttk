#include <cstdlib>
#include <iostream>
#include "osztaly.h"

using namespace std;

int main(int argc, char *argv[])
{
    
    double a=5.0, b=2.0;
    Alap p(a,b);
    p.vegrehajt();
    p.kiir();
    Szarm sz(a,b);
    sz.vegrehajt();
    sz.kiir();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
