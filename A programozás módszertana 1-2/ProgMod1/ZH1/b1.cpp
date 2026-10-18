/* 1. feladat

Olvasson be egész számokat addig amíg a megadott szám nem 3-al
osztható páratlan szám. A beolvasás után írassa ki hogy a beolvasott számok
közül hány volt páratlan. mennyi volt 5-el oszthatók átlaga, és melyik az 5-el
oszthatók közül a legkisebb és hányadiknak adtuk meg azt. (a végén megadott
szám is beleszámít a sorozatba)

*/

#include <iostream>

using namespace std;

int main(){
    int szam;
    int paratlanok=0;
    int otteloszth=0;
    int sorsz=1;
    int legkot=0;
    int legkotsorsz=0;
    int otteloszthossz=0;
    double otosztatl;
    cout<<"Kerek egy szamot: ";
    cin>>szam;
    
    bool kermeg=true;
    while(kermeg){
        if(szam%2) paratlanok++;
        if(szam%5==0) {
            otteloszth++;
            otteloszthossz+=szam;
            if(legkotsorsz==0){
                legkotsorsz=sorsz;
                legkot=szam;
            }else{
                if(legkot>szam){
                    legkotsorsz=sorsz;
                    legkot=szam;
                }
            }
        }
        
        if(szam%3==0 && szam%2==1) kermeg=false;
        else{
            cout<<"Kerek egy uj szamot: ";
            cin>>szam;
            sorsz++;
        }
    };
    
    cout<<"A paratlanok szama "<<paratlanok<<"."<<endl;
    if(legkot){
        cout<<"Az 5-tel oszthatoak atlaga "<<(double)otteloszthossz/otteloszth<<"."<<endl;
        cout<<"A legkisebb 5-tel oszthato szam a(z) "<<legkot<<", "<<legkotsorsz<<". alkalomnal adtuk meg."<<endl;
    } else cout<<"5-tel oszthato szam nem volt!";
    
    
    cin.get();cin.get();
}
