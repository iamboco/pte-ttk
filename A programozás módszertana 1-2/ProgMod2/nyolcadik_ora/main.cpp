#include <cstdlib>
#include <iostream>
#include "osztaly.h"

using namespace std;

int Raktar::arufajta = 3;

int main(int argc, char *argv[])
{
    Raktar* r;
    r = new Raktar;
    r -> keszlet();
    r -> kiir();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}


/*
  Struktúrák, statikus adattagok
  
  Struktúra különbségei az osztályhoz képest:
            - alapértelmezetten minden adattag public
            - nem szokás tagfüggvényeket pakolni bele
  
  Statikus adattag:
            - csak egy példanyban létezik
            - minden példányosított objektumra ugyanaz az érték érvényes automatikusan
            - kezdõérték megadása nem a konstruktorban, hanem azon kívül történik
            
*/
