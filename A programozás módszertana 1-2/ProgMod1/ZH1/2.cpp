#include <iostream>

using namespace std;

int main() {
    int elemszam;
    cout<<"Kerem a tomb elemszamat: ";
    cin>>elemszam;
    
    int* tomb;
    tomb = (int*) new int[elemszam];
    
    double max,min;
    int maxindex,minindex;
    float atlag;
    int i;
    
    
    cout<<"1. elem: "; cin>>tomb[0];
    atlag=max=min=tomb[0];
    maxindex=minindex=1;
    
    for(i=1 ; i<elemszam ; i++) {
                                    cout<<i+1<<". elem: "; cin>>tomb[i];
                                    if (max<tomb[i]) {
                                                     max=tomb[i];
                                                     maxindex=i+1;
                                                     }
                                    if (min>tomb[i]) {
                                                     min=tomb[i];
                                                     minindex=i+1;
                                                     }
                                    }
    double osszeg=0;
    for(i=0 ; i<elemszam ; i++) {
            osszeg+=tomb[i];
            }
    atlag=osszeg/elemszam;
    cout<<"Legnagyobb elem: "<<max<<endl;
    cout<<"(A legnagyobb elem elso elofordulasa a(z) "<<maxindex<<". helyen volt.)"<<endl;
    cout<<"Legkisebb elem: "<<min<<endl;
    cout<<"(A legkisebb elem elso elofordulasa a(z) "<<minindex<<". helyen volt.)"<<endl;
    cout<<"A megadott szamok atlaga: "<<atlag<<endl;

    delete [] tomb;
    system("pause");
}
