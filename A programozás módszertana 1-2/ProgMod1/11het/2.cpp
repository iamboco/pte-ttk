#include <iostream>
#include <fstream>
#include <string>

using namespace std;

// Kizárólag egész számokat és üres helyeket tartalmazó fájl számait
// összeadja, és másik fájlban az összeget tárolja.

int main(){
//  ifstream fin("szamok.txt");     /* akár így is, vagy: */
    ifstream fin;
    fin.open("szamok.txt");         /* vagy így */
    
    if (fin.fail()) { cout<<"Hiba!"; exit(-1); }
    
    ofstream fout;                  /* kimeneti stream */
    fout.open("osszeg.txt");
//  fout.open("osszeg.txt", ios::app ); /* HOZZÁÍRÁSRA nyitja, nem töröl (APPend) */
    if (fout.fail()) { cout<<"Hiba!"; exit(-1); }
    
    int szam, osszeg=0;
    
    while(fin>>szam) /* amíg típusnak megfelelõt talál, olvas (fájlvégig) - visszatérési értéke miatt */
        osszeg+=szam;
    
    fout<<"Az osszeg: "<<osszeg<<endl;
    
    fin.close();
    fout.close();
    system("pause");
}
