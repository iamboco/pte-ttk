#include <iostream>

using namespace std;

void min_oszlop(int **,int&);

int main() {
    int** mtx;
    mtx = (int**) new int[5];
    for (unsigned i=0; i<5; ++i)
     mtx[i]= new int[5];
     
    for(unsigned i=0;i<5;++i) 
        for(unsigned j=0;j<5;++j)
        {
                             mtx[i][j]=(5*i+j+1);
                             }
        
    cout<<"\nA megadott matrix:" <<endl;
    for(unsigned i=0;i<5;++i) {
        for(unsigned j=0;j<5;++j){
                                  cout<<mtx[i][j]<<'\t';
                                  }
        cout<<endl;
    }
    cout<<"Oszloposszegek:\n";
    
    int minimalis;
    min_oszlop(mtx,minimalis);
    cout<<endl<<"A legkisebb oszloposszegu oszlop szama: "<<minimalis<<endl;
    
    for (unsigned i=0; i<5; ++i)
     delete [] mtx[i];
    delete [] mtx;
    system("pause");
}

void min_oszlop(int** mtx,int& min_oszlop_index){
     int oszloposszeg[4];
     for(unsigned i=0;i<5;i++) oszloposszeg[i]=0;
     
     for(unsigned j=0;j<5;++j) {
         for(unsigned i=0;i<5;++i) {
                                   oszloposszeg[j]+=mtx[i][j];
                                   }
         cout<<oszloposszeg[j]<<'\t';
         }
     
     min_oszlop_index=0;
     for(unsigned j=1;j<5;++j) {
         if (oszloposszeg[j]<oszloposszeg[min_oszlop_index]) min_oszlop_index=j;
         }
     ++min_oszlop_index;                         
}
