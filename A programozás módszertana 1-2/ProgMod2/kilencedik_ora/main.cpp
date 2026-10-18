/*
  STL -> Konténerek, tárolók
  
*/


#include <iostream>
#include <vector>

using namespace std;

void kiir(const string& szoveg, const vector<int>& v);

int main()
{
    const char db = 10;
    
    vector<int> vektor(db);
    // A vector osztálysablon egészekre vonatkoztatva, 
    // 10 darab nullával tölti fel a konstruktor (mert 0 az alapértelmezett alapérték)
    
    for(unsigned char i=0; i<vektor.size(); ++i) vektor[i] = i*i;
    kiir("A vektor tartalma: ",vektor);
    
    double atlag = 0.0;
    for(unsigned char i=0; i<vektor.size(); ++i) atlag += vektor[i];
    atlag /= vektor.size();
    cout<<"A vektor elemeinek atlaga: ";
    cout<<atlag<<endl;
    
    vektor.push_back(100);    // új bepakolása
    vektor.push_back(121);
    
    vektor.pop_back();        // elem levétele (végérõl) (nem törli, csak már nem tartozik a vektorhoz)
    
    kiir("A vektor tartalma: ",vektor);
    
    
    // Hozzáférés az elemekhez:
    cout<<endl<<"A vektor elso eleme: "<<vektor[0];
    cout<<endl<<"A vektor elso eleme: "<<*vektor.begin();                 // iterátort ad vissza => ~mutató
    cout<<endl<<"A vektor utolso eleme: "<<vektor[vektor.size()-1];
    cout<<endl<<"A vektor utolso eleme (nem jo): "<<*vektor.end();        // 121-et adja, ami már nem tartozik a vektorhoz!
                                                                          // .end() az utolsó UTÁNI elemet adja
    cout<<endl<<"A vektor utolso eleme: "<<*(vektor.end()-1);             // így már jó
    cout<<endl;
    vector<int>::iterator p = vektor.begin();
    cout<<vektor[2]<<endl;
    cout<< *(p+2) <<endl;
    cout<< *(++p) <<endl;
    cout<< *(--p) <<endl;
    
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void kiir(const string& szoveg, const vector<int>& v){
     cout<<endl<<szoveg;
     
     // Iterátorral járjuk be:
     for(vector<int>::const_iterator iter=v.begin(); iter!=v.end(); ++iter){
                               cout<<*iter<<'\t';             // iterátor által mutatott érték
                               // a sima iterator lehetõvé teszi az általa mutatott érték módosítását,
                               // ezért kellett const_iterator típus
     }
     cout<<endl<<endl;
}
