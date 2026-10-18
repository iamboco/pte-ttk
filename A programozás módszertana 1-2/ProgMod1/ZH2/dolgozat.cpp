#include <iostream>
#include <fstream>

using namespace std;

int main() {
    int szam,max,sor,osszeg,maxosszeg,maxosszegsora,maxszamsora,szamokszama;
    float atlag;
    double teljesosszeg;
    
    max=maxosszeg=osszeg=maxosszegsora=maxszamsora=szamokszama=0;
    teljesosszeg=0;
    sor=1;
    
    ifstream Bef1("sok_szam.txt");
    if (Bef1.fail()) { cout<<"Hiba!"; exit(-1); }
    ofstream Kif1("zh2_1.txt");
    if (Kif1.fail()) { cout<<"Hiba!"; exit(-1); }
    
    char karakter;
    
    while(Bef1.get(karakter)) {
        if((karakter>='0')&&(karakter<='9')) {
                szam*=10;
                szam+=karakter-'0';
                }
        else if(szam) { 
                osszeg+=szam;
                if(szam>max) { max=szam; maxszamsora=sor; }
                szam=0;
                szamokszama++;
                }
        
        if(karakter=='\n') {
                teljesosszeg+=osszeg;
                if(osszeg>maxosszeg) { maxosszeg=osszeg; maxosszegsora=sor; }
                osszeg=0;
                sor++;
        }
    }
    atlag=teljesosszeg/szamokszama;
    Kif1<<"Legnagyobb szam: "<<max<<endl;
    Kif1<<"Melyik sorban van: "<<maxszamsora<<endl;
    Kif1<<"Melyik sorban legnagyobb a szamok osszege: "<<maxosszegsora<<endl;
    Kif1<<"Szamok atlaga: "<<atlag<<endl;
    
    Bef1.close();
    Kif1.close();
}
