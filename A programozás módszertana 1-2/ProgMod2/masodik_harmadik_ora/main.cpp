#include <iostream>
#include "pont.h"

using namespace std;

int main(int argc, char *argv[]){
    Pont A;
    cout<<"x = "<<A.getX()<<endl;
    cout<<"x = "<<A.getY()<<endl<<endl;

    Pont B(4.0,3.0);  // paraméteres konstruktor kell hozzá
    cout<<"x = "<<B.getX()<<endl;
    cout<<"x = "<<B.getY()<<endl<<endl;

    Pont C(B);
    cout<<"x = "<<C.getX()<<endl;
    cout<<"x = "<<C.getY()<<endl<<endl;
    
    
    cout<<"A es B pont tavolsaga: "<<A.dd(A,B)<<endl;
    // A és B pont távolságát számolja ki
    // (euklideszi távolság -> d=sqrt((x2-x1)^2+(y2-y1)^2)
    
    // ahogy én írtam, osztályon BELÜLI fv. lett -> úgy elég lenne az osztályon belüli
    // koordinátákra és egy másik pont koordinátáira kialakítani ( pl. A.d(B) )
    
    
    // Osztályon kívüli megvalósítással:
    cout<<"A es B pont tavolsaga: "<<dist(A,B)<<endl;
    
    
    
    
    
    
    cout<<endl<<endl;
    // 3. ÓRA
    
    cout<<"B es C pont tavolsaga: "<<B.d(C)<<endl;
    cout<<"B pont tavolsaga az origotol: "<<B.d()<<endl;
    
    Pont E(4.25,6.5);
    Pont F(2.75,-4.25);
    
    cout<<"E es F pont felezopontja: ";
    E.felezo(F).kiir();
    cout<<"Az origo es E pont felezopontja: ";
    E.felezo().kiir();
    
    cout<<"Az E es F pont 4:5 aranyu felosztasa: ";
    E.felezo(F,4,5).kiir();
    
    Pont G(1.,1.);
    Pont H(15.,15.);
    
    cout<<"A G es H pont 3:4 aranyu felosztasa: ";
    G.felezo(H,3,4).kiir();
    
    // Operátortúlterhelés:
    cout<<E.felezo(F);
    
    system("pause");
}
