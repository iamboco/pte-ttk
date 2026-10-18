#include <iostream>
#include "pont.h"

using namespace std;

/*
  
  Operátortúlterhelés (operator overloading)
  
  int a=5, b=3; double c=5.2, d=3.6; a+b; a+c; c+d;
  "ab"+"cd";
  
  Nem túlterhelhetõ operátorok:
      ::
      .
      ? :
  

*/

int main(){
    Pont A1(4.0, 3.0);
    Pont B1;
    B1=A1;
    B1.kiir();
    Pont C1(4.0, 10.0);
    if(B1 == C1) cout<<"igen"<<endl;
          else cout<<"nem"<<endl;
    if(B1 != C1) cout<<"nem egyenlo"<<endl;
          else cout<<"egyenlo"<<endl;
    Pont D1(A1+C1);
    D1.kiir();
    Pont E1(A1-C1);
    E1.kiir();
    Pont F1(A1+4.2);
    F1.kiir();
    Pont G1(B1*6.0);
    G1.kiir();
    A1+=G1;
    A1.kiir();
    
    Pont H1(++A1);
    H1.kiir();
    A1.kiir();
    
    Pont I1(A1++);
    I1.kiir();
    A1.kiir();
    
    system("pause");
}
