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
    
    fout.open("osszeg3.txt");

/*
    _____12345________...___6789 ugyanúgy mint a másik fa.-nál, itt is a számok kellenek
    csak, a köztük levõ cucc nem ==> most folyamatosan fogjuk feldolgozni
    
    
    ( Tanári verzió :P )
*/

    int szam;
    int sor_osszeg;
    int osszeg=0;
    int sorszam=0;
    string sor;
    bool van_szam;
    
    while(getline(fin,sor)) {
        int i=0;
        sor_osszeg=0;
        ++sorszam;
        van_szam=true;
        do{
                szam=0;
                while( (!isdigit(sor[i])) && (i!=sor.size()) ) ++i;
                if(i==sor.size()) van_szam=false;
                     else 
                         for(;isdigit(sor[i]);++i) {
                             szam=10*szam+sor[i]-'0';
                         }
                sor_osszeg+=szam;
        } while(i!=sor.size());
        osszeg+=sor_osszeg;
    }
    
    fout<<"Osszeg: "<<osszeg<<endl;
    
    fin.close();
    fout.close();
    
    system("pause");
}
