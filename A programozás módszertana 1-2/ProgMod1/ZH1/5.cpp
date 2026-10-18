#include <iostream>

using namespace std;

int main(){
    unsigned int sor, oszlop;
    cout<<"Sorok szama:";
    cin>>sor;
    cout<<"Oszlopok szama:";
    cin>>oszlop;
    
    int** mtx;
    mtx = (int**) new int[sor];             /* 4 elemû tömb, egészre mutató pointerek tömbje - mtx az elejére mutat */
    for (unsigned i=0; i<sor; ++i)
     mtx[i]= new int[oszlop];

    int sorszorzat[sor];
    for(unsigned i=0;i<sor;++i) sorszorzat[i]=1;
    
    for(unsigned i=0;i<sor;++i) {
        for(unsigned j=0;j<oszlop;++j) {
                             cout<<"a["<<i<<"]["<<j<<"]=";
                             cin>>mtx[i][j];
                             sorszorzat[i]*=mtx[i][j];
                             }
}
    
    cout<<"\nA megadott matrix:" <<endl;
    for(unsigned i=0;i<sor;++i) {
        for(unsigned j=0;j<oszlop;++j)
        {
                             cout<<mtx[i][j]<<'\t';
                             }
        cout<<endl;
    }
    
    for(unsigned i=0;i<sor;++i) {if ((sorszorzat[i]%2)==1) cout<<endl<<"A "<<i+1<<". sor szorzata paratlan.";}
    
    for (unsigned i=0; i<sor; ++i)
     delete [] mtx[i];
    
    delete [] mtx;
    
    cout<<endl;
    system("pause");
    return 0;
}
