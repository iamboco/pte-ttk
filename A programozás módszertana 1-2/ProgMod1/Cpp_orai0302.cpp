#include <iostream>
using namespace std;

const int M=4;

int main(){
    int mtx[M][M]={{0,1,0,1},
                   {0,0,0,1},
                   {1,0,0,0},
                   {0,1,0,0}
                   };
    
//    int i=0,j=0;
    for(int i=0;i<M ;++i){
       for(int j=0; j<M ;++j) {cout<<mtx[i][j]<<'\t';}
       cout<<endl;
    }      
    system("pause");
    return 0;
    }
