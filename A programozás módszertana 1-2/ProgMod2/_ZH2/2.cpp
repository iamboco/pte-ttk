#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

int min_sor_osszeg(const vector<vector<int> >& matrix);

int main(){
    unsigned sorsz,oszlopsz;
    cout<<"Sorok szama: "; cin>>sorsz;
    cout<<"Oszlopok szama: "; cin>>oszlopsz;
    cout<<endl;
    
    vector<vector<int> > A;
    
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
    
    cout<<endl<<"A legkisebb sorosszegu sor a(z) "<<min_sor_osszeg(A)<<".";
    
    cout<<endl;
    system("pause");
    return 0;
}

int min_sor_osszeg(const vector<vector<int> >& matrix){
            int i=0;
            int min;
            int sorszam=0;
            int legkisebbsorszam;
            for(vector<vector<int> >::const_iterator iter=matrix.begin(); iter!=matrix.end(); ++iter) {
               sorszam++;
               for(vector<int>::const_iterator iter2=(*iter).begin(); iter2!=(*iter).end(); ++iter2) {
                            i+=*iter2;
               }
               if(sorszam==1) {
                             min=i;
                             legkisebbsorszam=sorszam;
               } else {
                       if(min>i) {
                                 min=i;
                                 legkisebbsorszam=sorszam;
                                 }
                       }
               i=0;
            }
            return legkisebbsorszam;
}
