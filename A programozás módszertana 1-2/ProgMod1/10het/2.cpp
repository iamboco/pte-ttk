#include <iostream>
#include <fstream>
#include <cctype>

using namespace std;

int main() {
    ifstream fin("test.dat");
    /*if(!fin) {
             cout << "\a Cannot open file.\n";
             return 1;
             }*/
    char ch;
    char idnum[5];
    idnum[4]=0;
    do { fin.ignore(30,'#');                        //addig (max 30 karakterig) hagyja figyelmen kívül, még nincs #
         ch=fin.peek();                             //az a cucc, ami # után jön
         if(fin.eof()) {fin.clear(); break;}        //mert hátultesztelõ 
         if(isdigit(ch)) {                          //megnézi, hogy a ch számot tartalmaz-e (cctype header kell hozzá)
           fin.read(idnum,4);                       //fin.read(hova olvassunk be,hány karaktert)
           cout<<"Azonosito: "<<idnum<<endl;
           }
         else {cout<<"Az azonosito nem elerheto, ";
              string indok;
              getline(fin,indok);                   //getline(honnan,hova)
              cout<<indok<<"!"<<endl;
              }
    }
    while (!fin.eof() && fin.good());
    fin.close();
    system("pause");
}
