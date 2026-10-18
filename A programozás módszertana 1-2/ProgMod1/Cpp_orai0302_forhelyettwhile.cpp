#include <iostream>
using namespace std;

const int M=4;

int main(){
    int mtx[M][M]={{0,1,0,1},
                   {0,0,0,1},
                   {0,0,0,0},
                   {0,0,1,0}
                   };

//    int i=0,j=0;
    for(int i=0;i<M ;++i){
       for(int j=0; j<M ;++j) {cout<<mtx[i][j]<<'\t';}
       cout<<endl;
    }      
    
/* 1.feladat: Adott 4x4-es egészeket tartalmazó mátrix. Írassuk ki az elsõ olyan sornak
   a számát, ami csupa 0-t tartalmaz! */

   int z,talalt;  /* Talalt - lehet még: bool talalt=false; */
   
   int i=0;
   while(i<M){
           int j=0;
           while(j<M) {
                              if(mtx[i][j]!=0) talalt=1;
                              ++j;
                              }
           if(!(talalt)) { talalt=i; break; } else talalt=0;
           ++i;
           }
   (talalt) ? cout<<endl<<"A keresett sor a "<<(talalt+1)<<"."<<endl : cout<<endl<<"Nincs ilyen sor!"<<endl;


   
    system("pause");
    return 0;
}
