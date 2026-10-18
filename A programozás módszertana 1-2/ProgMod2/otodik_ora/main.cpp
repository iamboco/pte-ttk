#include <cstdlib>
#include <iostream>
#include "pont.h"

using namespace std;

/*
  Jövõ héten ZH!
  Coospace-en gyakorló feladatok
*/

int main()
{
    
    // Ötödik óra
    
    Pont A1(3.0,4.0);
    Pont B1(4.0,5.0);
    Pont C1=A1+B1;
    C1.kiir();
    cout<<A1+B1<<endl;
    if(A1==B1) cout<<"Egyenlo."<<endl; else cout<<"Nem egyenlo."<<endl;
    if(!(A1!=B1)) cout<<"Egyenlo."<<endl; else cout<<"Nem egyenlo."<<endl;
    cout<<"A1 osszeadas elott: "<<A1<<endl;
    A1+=B1;
    cout<<"A1 osszeadas utan: "<<A1<<endl;
    Pont D1(5.0,4.0);
    Pont E1(2.0,2.0);
    Pont F1=D1-E1;
    F1.kiir();
    F1=F1-1;
    F1.kiir();
    F1=F1+1;
    F1.kiir();
    F1=F1*2;
    F1.kiir();
    F1++.kiir();
    F1.kiir();
    Pont G1(++F1);
    F1.kiir();
    G1.kiir();
    
    
    system("PAUSE");
}
