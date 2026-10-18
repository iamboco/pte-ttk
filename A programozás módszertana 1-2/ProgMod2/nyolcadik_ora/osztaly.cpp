#include <iostream>
#include "osztaly.h"

using namespace std;

Raktar::Raktar(){
     rak = new aru[arufajta];
     cout<<"A raktar feltoltese: "<<endl;
     for(int i=0; i<arufajta; ++i){
           cout<<i+1<<". aru neve: ";
           cin>> rak[i].nev;
           cout<<i+1<<". aru darabszama: ";
           cin>> rak[i].darab;
           cout<<i+1<<". aru egysegara: ";
           cin>> rak[i].egysegar;
     }
     osszdarab = 0;
     osszar = 0.0;
}

Raktar::~Raktar(){
     delete[] rak;
}

void Raktar::keszlet(){
     for(int i=0; i<arufajta; ++i){
           osszdarab += rak[i].darab;
           osszar += rak[i].darab * rak[i].egysegar;
     }
}

void Raktar::kiir(){
     cout<<"\nOsszertek: "<<osszar;
     cout<<"\nOsszdarabszam: "<<osszdarab<<endl;
}
