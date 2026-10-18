#include <iostream>

using namespace std;

int main() {
    int a;
    char nullaegy=0,nullaketto=0;
    int lnparos,lkptlan;
    int sorszam,lnparosszam,lkptlanszam;

    int elozolnparos,elozolnparosszam=-1;
    
    lnparosszam=lkptlanszam=-1;
    sorszam=1;
    while(!(nullaketto)) {
                                     if ((a==0)&&(nullaegy==0)) {elozolnparos=lnparos;elozolnparosszam=lnparosszam;}
                                     cout<<"A(z) "<<sorszam<<".szam: ";cin>>a;
                                     if ((lkptlanszam==-1)&&(a%2==1)) {
                                                                      lkptlanszam=sorszam;
                                                                      lkptlan=a;
                                                                      }
                                         else if ((a<lkptlan)&&(a%2==1)){
                                                                         lkptlanszam=sorszam;
                                                                         lkptlan=a;
                                                                         }
                                                                       
                                     if ((lnparosszam==-1)&&(a%2==0)) {
                                                                      lnparosszam=sorszam;
                                                                      lnparos=a;
                                                                      }
                                         else if ((a>lnparos)&&(a%2==0)){
                                                                         lnparosszam=sorszam;
                                                                         lnparos=a;
                                                                         }
                                     if ((a==0)&&(nullaegy!=0)) {
                                                                nullaketto=1;
                                                                lnparos=elozolnparos;
                                                                lnparosszam=elozolnparosszam;
                                                                }
                                     if ((a==0)&&(nullaegy==0)) nullaegy=1;
                                     sorszam++;
    }
    if (lnparosszam==-1) cout<<"Nem adtunk meg paros szamot!\n";
       else cout<<"A megadott legnagyobb paros szam: "<<lnparos<<", ez a "<<lnparosszam<<". megadott szam volt.\n";
    if (lkptlanszam==-1) cout<<"Nem adtunk meg paratlan szamot!\n";
       else cout<<"A megadott legkisebb paratlan szam: "<<lkptlan<<", ez a "<<lkptlanszam<<". megadott szam volt.\n";
    system("pause");
}
