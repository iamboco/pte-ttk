#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream fin;
    ofstream fout;
    fin.open("szoveg.txt");
    fout.open("megoldas3.txt");
    
    int a,e,i,o,u;
    a=0; e=0; i=0; o=0; u=0;
    char karakter;
    
    while(fin.get(karakter)){
        if(karakter=='a') a++;
        else if(karakter=='e') e++;
        else if(karakter=='i') i++;
        else if(karakter=='o') o++;
        else if(karakter=='u') u++;
    }
    
    int legtobb=0;
    char legtobbkar;
    if(a>legtobb) legtobbkar='a';
    if(e>legtobb) legtobbkar='e';
    if(i>legtobb) legtobbkar='i';
    if(o>legtobb) legtobbkar='o';
    if(u>legtobb) legtobbkar='u';
    
    
    cout<<"A leggyakoribb maganhangzo: "<<legtobbkar<<", elofordulasai: "<<legtobb<<endl;

    fin.close(); fin.open("szoveg.txt");
    while(fin.get(karakter)){
        if(karakter!=legtobbkar) fout.put(karakter);
    }
    
    fin.close();
    fout.close();
    system("pause");
}
