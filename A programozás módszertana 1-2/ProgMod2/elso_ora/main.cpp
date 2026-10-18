/*******************************************************/
/************objektumorientált programozás**************/
/************osztályok elemei az objektumok*************/
/*objektumok --> adattagok, attributumok, tulajdonságok --> egységbezárás*/
/*********** --> tagfüggvények, metódusok ************* --> enkapszuláció*/
/*************************************************************************/
//példa:
//sikbeli pontok halmaza
//koordinatarendszer: A(1;2)
//az adattagok a pontok két koordinátája: x, y
//tagfügvények: tükrözés
//koordináták beállitása --> setter  --> beállító
//koordináták leolvasása --> getter  --> megkapó(leolvasó)

//az osztály kipróbálása
#include <cstdlib>
#include <iostream>
#include "pont.h"
using namespace std;

int main(int argc, char *argv[]){
Pont A; //Pont osztályon belül létrehozunk egy 'A' objektumot --> példányosítás
A.setX(5.0);//Az 'A' objektumnak odaadjuk az 5.0 értéket
A.setY(3.0);//Az 'A' objektumnak odaadjuk az 3.0 értéket
//cout<<A.x<<endl; ezt igy nem szabad!!!!!
//cout<<A.y<<endl;
cout<<"a("<<A.getX()<<","<<A.getY()<<")"<<endl;

    system("PAUSE");
    return EXIT_SUCCESS;
}
