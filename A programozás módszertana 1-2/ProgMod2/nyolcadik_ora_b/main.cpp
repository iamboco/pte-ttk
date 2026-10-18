#include <iostream>

using namespace std;

int main(){
    int* a;
    a = new int[100];
    int szamdarab=0;
    int pdarab=0;
    bool nulla=false;
    
    for(int i=0; i<100; i++) {
            cout<<i+1<<". szam: ";
            cin>>a[i];
            if(( nulla) && (a[i]==0) ) { szamdarab--; break; }
                else if (a[i]==0) nulla=true;
            ++szamdarab;
    }
    
    for (int i=0; i<szamdarab; i++) {
        if(!(a[i]&1)) {
                      pdarab++;
                      cout<<a[i]<<"; ";
        }
    }
    cout<<"\nParos szamok szama: "<<pdarab<<" darab."<<endl;
    
    delete[] a;
    
    system("pause");
    return 0;
}
