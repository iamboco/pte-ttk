#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main(){
    ifstream fin;
    ofstream fout;
    string fin_name;
    cout<<"Adja meg a bemeneti fajl nevet: ";
    cin>>fin_name; /* pl. szamok.txt --> [0]=s [10]='\0' */
    fin.open(fin_name.c_str()); /* így szabad csak! */
    
    if (fin.fail()) { cout<<"Hiba!"; exit(-1); }
    
    fout.open("osszeg2.txt");

/*
    _____12345________...___6789 ugyanúgy mint a másik fa.-nál, itt is a számok kellenek
    csak, a köztük levõ cucc nem ==> most folyamatosan fogjuk feldolgozni
*/

    char zzz;
    int szam=0;
    int osszeg=0;
    while(fin.get(zzz)){
        if((zzz>='0')&&(zzz<='9')) {
                szam*=10;
                szam+=zzz-'0';
                }
            else if(szam) {osszeg+=szam; szam=0;}
    }
    osszeg+=szam;            /* Különben kihagyja az utsót, ha számmal végzõdik */
    
    
    fout<<"Osszeg: "<<osszeg<<endl;
    
    fin.close();
    fout.close();
    
    system("pause");
}
