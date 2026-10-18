#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin;
    ofstream fout;
    fin.open("matrix.txt");
    fout.open("megoldas2.txt");
    
    int sor;
    int oszlop;
    char karakter='0';
    int szam=0;
    while((karakter>='0')&&(karakter<='9')) {
                szam*=10;
                szam+=karakter-'0';
                fin.get(karakter);
                }
    sor=szam;
    
    while((karakter<'0')||(karakter>'9')) fin.get(karakter);
    szam=0;
    while((karakter>='0')&&(karakter<='9')) {
                szam*=10;
                szam+=karakter-'0';
                fin.get(karakter);
                }
    oszlop=szam;
    
    int *tomb;
    tomb=new int[sor][oszlop];
    
    fin.close();
    fout.close();
    system("pause");
}
