#include <iostream>
#include <vector>

using namespace std;

int main(){
    int szam;
    vector<int> parosok;
    // <int> <= osztályáltalánosításon belül konkrét osztály
    // alapért. konstruktor meghívva
    do {
        cout<<"Kerek egy szamot: ";
        cin>>szam;
        if(!(szam&1) && szam) parosok.push_back(szam);
    } while (szam!=0);
    
    
    cout<<"A parosok szama: "<<parosok.size()<<endl;
    cout<<"A megadott paros szamok: "<<endl;
    for(int i=0; i<parosok.size(); ++i) cout<<parosok[i]<<'\t';
    // vagy: parosok.at[i]  <== ügyel arra hogy határon belül legyünk
    cout<<endl;
    
    system("pause");
    return 0;
}
