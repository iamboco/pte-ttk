#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

vector<int> paros_oszlop_szorzat(const  vector<vector<int> >& matrix);

int main(){
    unsigned sorsz,oszlopsz;
    cout<<"Sorok szama: "; cin>>sorsz;
    cout<<"Oszlopok szama: "; cin>>oszlopsz;
    cout<<endl;
    
    vector<vector<int> > A;
    vector<int> B;
    
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
    
    B=paros_oszlop_szorzat(A);
    cout<<"Paros elemszorzatu oszlopok szamai: ";
    for(vector<int>::const_iterator iter=B.begin(); iter!=B.end(); ++iter) {
                            cout<<*iter<<" ";
    }
    
    
    cout<<endl;
    system("pause");
    return 0;
}

vector<int> paros_oszlop_szorzat(const vector<vector<int> >& matrix){
            int oszlopszam=0;
            int oszlopokszama;
            int *oszlopszorzat;
            
            vector<int> eredm;
            
            // Oszlopszám-meghatározás
            vector<vector<int> >::const_iterator iter=matrix.begin();
               for(vector<int>::const_iterator iter2=(*iter).begin(); iter2!=(*iter).end(); ++iter2) {
                            oszlopszam++;
               }
            oszlopokszama=oszlopszam;
            
            oszlopszorzat = new int[oszlopokszama];
            for(int j=0; j<oszlopokszama; j++)
                       oszlopszorzat[j]=1;
            
            for(vector<vector<int> >::const_iterator iter=matrix.begin(); iter!=matrix.end(); ++iter) {
               
               oszlopszam=0;
               for(vector<int>::const_iterator iter2=(*iter).begin(); iter2!=(*iter).end(); ++iter2) {
                            oszlopszorzat[oszlopszam]*=*iter2;
                            oszlopszam++;
               }
            }
            for(int i=0; i<oszlopokszama; i++)
               if(!(oszlopszorzat[i]&1)) eredm.push_back(i+1);
            
            return eredm;
}
