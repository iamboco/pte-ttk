#include <iostream>
 using namespace std;
 const int darab=5;
 int main( )
 {
 int szam[darab], max, min, maxdarab, mindarab;
 cout << "Adjon meg " << darab << " egesz szamot:\n";
 cin >> szam[0];
 max = min = szam[0];
 maxdarab = mindarab = 1;
 for (unsigned i = 1; i < darab; i++)
 {
 cin >> szam[i];
 if (szam[i] > max) {max = szam[i]; maxdarab=1;}
 else if (szam[i] == max) maxdarab++;
 if (szam[i] < min) {min = szam[i]; mindarab=1;}
 else if (szam[i] == min) mindarab++;
 }
 cout << "A legnagyobb szam: " << max << ", elofordul: "<<maxdarab<<" helyen."<<endl;
 cout << "A legkisebb szam: " << min << ", elofordul: "<<mindarab<<" helyen."<<endl;
 cout << "A szamok es a legnagyobbtol vett differenciajuk:\n";

 for (unsigned i = 0; i < darab; i++)
 cout << max << "-"<<szam[i] << " = " << (max - szam[i]) << endl;
 system("pause");
 return 0;
 }


/* HF: bõvítés - a legnagyobb/legkisebb érték hol fordul elõ, kiíratni azt is */
