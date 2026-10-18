/*
  Listánál nincs [], vagy +1, -8, maximum ++, --, stb.!
  
*/

#include <iostream>
#include <list>

using namespace std;

void kiir(const string& szoveg, const list<int>& v);

int main()
{
    const char db = 10;
    
    list<int> lista(db);
    
    for(unsigned char i=0; i<lista.size(); ++i) lista[i] = i*i;
    kiir("A sor tartalma: ",lista);
    
    double atlag = 0.0;
    for(unsigned char i=0; i<lista.size(); ++i) atlag += lista[i];
    atlag /= lista.size();
    cout<<"A sor elemeinek atlaga: ";
    cout<<atlag<<endl;
    
    lista.push_back(100);
    lista.push_back(121);
    
    lista.pop_back();
    
    kiir("A sor tartalma: ",lista);
    
    
    cout<<endl<<"A sor elso eleme: "<<lista[0];
    cout<<endl<<"A sor elso eleme: "<<*lista.begin();
    cout<<endl<<"A sor utolso eleme: "<<lista[lista.size()-1];
    cout<<endl<<"A sor utolso eleme (nem jo): "<<*lista.end();
    cout<<endl<<"A sor utolso eleme: "<<*(lista.end()-1);
    cout<<endl;
    list<int>::iterator p = lista.begin();
    cout<<lista[2]<<endl;
    cout<< *(p+2) <<endl;
    cout<< *(++p) <<endl;
    cout<< *(--p) <<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void kiir(const string& szoveg, const list<int>& v){
     cout<<endl<<szoveg;
     
     for(list<int>::const_iterator iter=v.begin(); iter!=v.end(); ++iter){
                               cout<<*iter<<'\t';
     }
     cout<<endl<<endl;
}
