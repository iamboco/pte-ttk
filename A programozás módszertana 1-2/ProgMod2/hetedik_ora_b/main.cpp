#include <cstdlib>
#include <iostream>
#include "osztaly.h"

using namespace std;

int main(int argc, char *argv[])
{
    Teglalap T1(5.0, 2.0);
    T1.szamol1();
    T1.szamol2();
    T1.kiir();
    Kor K1(4.0);
    K1.szamol1();
    K1.szamol2();
    K1.kiir();
    
    cout<<endl<<endl;
    
    Alakzat *alakzatok[4];
    // 4 elemû tömb, aminek az elemei alakzatokra mutató pointerek
    alakzatok[0] = new Kor(1.0);
    alakzatok[1] = new Teglalap(2.0, 3.0);
    alakzatok[2] = new Kor(4.0);
    alakzatok[3] = new Teglalap(5.0, 6.0);
    
    for(char i=0; i<4; ++i) {
             alakzatok[i]->szamol1();     // vagy: (*alakzatok[i]).szamol1();
             alakzatok[i]->szamol2();
             alakzatok[i]->kiir();
             
             delete alakzatok[i];
    }
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

/*

Absztrakt osztály
-----------------

Tisztán virtuális tagfv.-ekbõl áll

             virtual void szamol1()=0;
"=0;"   -->   jelzi, hogy nem tartozik hozzá kód

Absztrakt osztályból nem lehet példányosítani, nem használható objektumok létrehozására!


*/
