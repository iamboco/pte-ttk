#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

void kiir(const vector<vector<int> >& m);
void itkiir(const vector<vector<int> >& m);
void ritkiir(const vector<vector<int> >& m);

int main(){
    
    //int szam=0;
    
    unsigned sorsz,oszlopsz;
    cout<<"Sorok szama: "; cin>>sorsz;
    cout<<"Oszlopok szama: "; cin>>oszlopsz;
    cout<<endl;
    
    vector<vector<int> > A;
    // vector<vector<int> > A(sorsz, oszlopsz); // duplázza a sorokat --> miért?
    
    for(int x=0; x<sorsz; ++x) {
            vector<int> sor;
            for(int y=0; y<oszlopsz; ++y) {
                    //sor.push_back(rand() % 10 + 1);
                    //sor.push_back(++szam);
                    int szam;
                    cout<<"A["<<x+1<<"]["<<y+1<<"]=";
                    cin>>szam;
                    sor.push_back(szam);
            }
            A.push_back(sor);
    }
    
    kiir(A);
     cout<<endl;
    itkiir(A);
     cout<<endl;
    ritkiir(A);
     cout<<endl;
    
    
    system("pause");
    return 0;
}

void kiir(const vector<vector<int> >& m){
    for(int i=0; i<m.size(); ++i) {
            for(int j=0; j<m[i].size(); ++j) {
                    cout<<"A(z) "<<i+1<<". sor "<<j+1<<". oszlopa:";
                    cout<<m[i][j];
                    cout<<endl;
            }
    } 
}

void itkiir(const vector<vector<int> >& m){
     for(vector<vector<int> >::const_iterator iter=m.begin(); iter!=m.end(); ++iter) {
               for(vector<int>::const_iterator iter2=(*iter).begin(); iter2!=(*iter).end(); ++iter2) {
                            cout<<*iter2<<'\t';
               }
               cout<<'\n';
     } 
}

void ritkiir(const vector<vector<int> >& m){
     for(vector<vector<int> >::const_reverse_iterator riter=m.rbegin(); riter!=m.rend(); ++riter) {
               for(vector<int>::const_reverse_iterator riter2=(*riter).rbegin(); riter2!=(*riter).rend(); ++riter2) {
                            cout<<*riter2<<'\t';
               }
               cout<<'\n';
     } 
}

/*
     iterator: elõrefelé megy                  ( begin() --> end()-1 )
     reverse_iterator: visszafelé megy         ( rend-1() <-- rbegin() )
     HF: sorcserélések, oszlopcserélések, determinánsmeghatározás, transzponáltmeghatározás stb.
*/
