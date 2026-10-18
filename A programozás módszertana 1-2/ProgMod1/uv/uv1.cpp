#include <iostream>

using namespace std;

int main() {
    int tombmeret;
    int *tomb;
    
    cout<<"Kerem a tombmeretet: ";
    cin>>tombmeret;
    tomb=new int[tombmeret];
    for(int i=0; i<tombmeret; i++) {
                cout<<"Kerek szamot!";
                cin>>tomb[i];
    }
    
    int paratlanosszeg=0;
    int paratlanok=0;
    float paratlanatlag;
    
    for(int i=0; i<tombmeret; i++) {
              if(tomb[i]%2==1) {paratlanosszeg+=tomb[i]; paratlanok++;}
    }
    
    
    if(paratlanok==0) cout<<"Nincs paratlan elem a tombben."<<endl;
    else {paratlanatlag=(float)paratlanosszeg/paratlanok; cout<<"A paratlan szamok atlaga: "<<paratlanatlag<<endl;}
    system("pause");
    
    int legnagyobbnegativ=-9999;
    int legnagyobbnegativindexe;
    int legkisebbpozitiv=9999;
    int legkisebbpozitivindexe;
    for(int i=0; i<tombmeret; i++) {
              if(tomb[i]<0)
                           if(tomb[i]>legnagyobbnegativ) {
                                                              legnagyobbnegativ=tomb[i];
                                                              legnagyobbnegativindexe=i+1; }
              if(tomb[i]>0)
                           if(tomb[i]<legkisebbpozitiv) {
                                                                  legkisebbpozitiv=tomb[i];
                                                                  legkisebbpozitivindexe=i+1; }
              }
    if(legnagyobbnegativ!=-9999)
                            cout<<"A legnagyobb negativ: "<<legnagyobbnegativ<<", indexe:"<<legnagyobbnegativindexe<<endl;
    else cout<<"Nincs legnagyobb negativ szam.";
    if(legkisebbpozitiv!=9999)
                           cout<<"A legkisebb pozitiv: "<<legkisebbpozitiv<<", indexe:"<<legkisebbpozitiv<<endl;
    else cout<<"Nincs legkisebb pozitiv szam.";
    system("pause");
    
    delete[] tomb;
}
