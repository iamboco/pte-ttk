#include <iostream>
using namespace std;

const int M=4;

int main(){
    int mtx[M][M]={{0,0,0,0},
                   {0,0,0,1},
                   {0,0,0,0},
                   {10,9,8,6}
                   };

//    int i=0,j=0;
    for(int i=0;i<M ;++i){
       for(int j=0; j<M ;++j) {cout<<mtx[i][j]<<'\t';}
       cout<<endl;
    }      
    
/* 1.feladat: Adott 4x4-es egészeket tartalmazó mátrix. Írassuk ki az elsõ olyan sornak
   a számát, ami csupa 0-t tartalmaz! */

   int talalt;  /* Talalt - lehet még: bool talalt=false; */
   talalt=0;
   
   for(int i=0 ; i<M && talalt==0 ; i++){
           for(int j=0 ; j<M && talalt==0 ; j++) {
                              if(mtx[i][j]!=0) {talalt=1;}
                              }
           if(!(talalt)) { talalt=i+1;} else talalt=0;
           }
   (talalt) ? cout<<endl<<"A keresett sor a "<<talalt<<"."<<endl<<endl : cout<<endl<<"Nincs ilyen sor!"<<endl<<endl;

/* 2.feladat: Összes csak 0-t tartalmazó sor sorszámának kiíratása */

   talalt=0;
   for(int i=0 ; i<M ; i++){
           for(int j=0 ; j<M && talalt==0 ; j++) {
                              if(mtx[i][j]!=0) {talalt=1;}
                              }
           if(!(talalt)) { cout<<"Ures sort talaltam:"<<i+1<<".sor!\n";} talalt=0;
           }
   if (!(talalt)) cout<<endl<<"Nincs ilyen sor!"<<endl;

/* 3.feladat: Összes olyan sor kiíratása, ami nem csupa 0 */

   talalt=0;
   for(int i=0 ; i<M ; i++){
           for(int j=0 ; j<M && talalt==0 ; j++) {
                              if(mtx[i][j]!=0) {talalt=1;}
                              }
           if(talalt) { cout<<"Nem ures sort talaltam,:"<<i+1<<".sor!\n";} talalt=0;
           }
   if (!(talalt)) cout<<endl<<"Nincs ilyen sor!"<<endl;

/* 4.feladat: Összes olyan sor tagösszegének kiíratása, ami nem csupa 0 */

   talalt=0;
   int osszeg=0;
   for(int i=0 ; i<M ; i++){
           for(int j=0 ; j<M && talalt==0 ; j++) {
                              if(mtx[i][j]!=0) {talalt=1;osszeg+=mtx[i][j];}
                              }
           if(talalt) { cout<<"Nem ures sort talaltam,:"<<i+1<<".sor, osszege: "<<osszeg<<"!\n"; osszeg=0;} talalt=0;
           }
   if (!(talalt)) cout<<endl<<"Nincs ilyen sor!"<<endl;


    system("pause");
    return 0;
}
