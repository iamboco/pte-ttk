#include <iostream>
#include <cmath>

 using namespace std;

double atlag(int* tomb, int db) {
       int osszeg=0;
       for(int i=db ; i>0; i--) {osszeg+=tomb[i-1];}
       return (float)osszeg/db;
       }
       
double* atlag_diff(int* tomb, int db, double atl) {
/* ! */ double* t;            /* Új tömb-kezdõmutató */
/* ! */ t=new double[db];     /* Lefoglal utána "db" méretû területet */
        for(; db ; db--) t[db-1]=atl-tomb[db-1];
        return t;
       }

 int main( ){
     
 int max, darab;
 int* szamok;
 
 cout << "Adja meg szamok szamat:\n";
 cin >> darab;
 cout << "Adjon meg " << darab << " egesz szamot:\n";
 szamok = new int[darab];
 //ide jön a legnagyobb elem meghatározása:
 cin >> szamok[0];
 max = szamok[0];
 for (unsigned i = 1; i < darab; i++)
 {
 cin >> szamok[i];
 if (szamok[i] > max) {max = szamok[i];}
 }
       
       

 cout << "A legnagyobb szam: " << max << endl;
 
 cout << "A szamok es a legnagyobbtol vett differenciajuk:\n";
 for (int i = 0; i < darab; i++) 
   cout << max << "-"<<szamok[i] << " = " << (max - szamok[i]) << endl;
 
 cout << "A megadott szamok atlaga: " << atlag(szamok,darab) << endl;
 
 cout << "A szamok es az atlagtol vett tavolsaguk:\n";
 double* tavok;
 tavok = new double[darab];
 tavok = atlag_diff(szamok, darab, atlag(szamok,darab));
 for(int i=0; i<darab; ++i) cout<<tavok[i]<<'\t';
 cout<<endl;
 
 delete [] szamok; 
 
 system("pause");
 return 0;
 }
