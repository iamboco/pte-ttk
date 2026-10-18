/* 2. feladat

Írjon függvényt, amely egy felhasználó által megadott pozitív egész
szám számjegyeinek összegét meghatározza. Írjon programot ami a felhasználó
által megadott egész számra meghívj a függvényt.(vizsgálja hogy a megadott
szám pozitív-e és addig ismételje a bekérést amíg pozitívat nem ad meg!)

*/

#include <iostream>

using namespace std;

int szjossz(int szam){
        return (szam==0)  ?  0 : ( szjossz( szam / 10 )+ szam % 10 );
}

int main(){
    int szam;
    cout<<"Kerem a szamot: ";
    cin>>szam;
    while(szam<0){
        cout<<"A szam nem pozitiv."<<endl;
        cout<<"Kerek egy uj szamot: ";
        cin>>szam;
    }
    
    cout<<szjossz(szam);
    
    cin.get();cin.get();
}
