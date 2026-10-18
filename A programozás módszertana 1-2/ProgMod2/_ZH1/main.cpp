#include <cstdlib>
#include <iostream>
#include "teglatest.h"

using namespace std;

int main()
{
    Teglatest ta();
    Teglatest tb(2.0, 3.0, 4.0);
    // Teglatest tc(ta);
    
    
    cout<<tb.GetFelszin()<<endl;
    cout<<tb.GetTerfogat()<<endl;
    cout<<tb.testatlo()<<endl;
    
    Teglatest td=tb;
    
    //if(ta==tb) cout<<"Egyenlo."<<endl; else cout<<"Nem egyenlo."<<endl;
    //if(ta!=tb) cout<<"Nem egyenlo."<<endl; else cout<<"Egyenlo."<<endl;
    //ta=ta*3;
    
//Legyen szíves megnézni a kommentezett részeket is, nem értem a hibák okát, a megoldás módja az óraival megegyezõ volt.
    
    cout<<ta<<endl;
    system("PAUSE");
}
