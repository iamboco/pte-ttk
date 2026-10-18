#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int sor,aktsorhossz,maxsorhossz,leghosszabbsor;
    char olvas;
    
    ifstream Bef2("Orwell.txt");
        if (Bef2.fail()) { cout<<"Hiba a megnyitasnal!"; cin.get(); exit(-1); }
    ofstream Kif2("zh2_2.txt");
        if (Kif2.fail()) { cout<<"Hiba a megnyitasnal!"; cin.get(); exit(-1); }
    
    
    aktsorhossz=maxsorhossz=leghosszabbsor=0;
    sor=1;
    
    while(Bef2.get(olvas)) {
        if(olvas=='\n') {
                if(aktsorhossz>maxsorhossz)
                                { maxsorhossz=aktsorhossz; leghosszabbsor=sor; }
                sor++;
                aktsorhossz=0;
        }
        else aktsorhossz++;
    }
    
    cout<<"Leghosszabb sor: "<<leghosszabbsor; cin.get();
    
    char *ideigl;
    ideigl=new char[maxsorhossz];
    
    Bef2.close(); Bef2.open("Orwell.txt");
    sor=1;
    bool megvan=false; int karbe=0;
    while(Bef2.get(olvas)) {
        if(olvas=='\n') {
                if((leghosszabbsor-1)==sor) megvan=true;
                if(sor==leghosszabbsor) megvan=false;
                sor++;
        }
        else {
                if(megvan) {
                                ideigl[karbe]=olvas;
                                karbe++;
                                if(karbe==maxsorhossz) break;
                }
        }
    }
    
    for(karbe=1 ; karbe<=maxsorhossz ; karbe++) {
        Kif2.put(ideigl[maxsorhossz-karbe]);
    }
    
    delete[] ideigl;
    
    Bef2.close();
    Kif2.close();
}
