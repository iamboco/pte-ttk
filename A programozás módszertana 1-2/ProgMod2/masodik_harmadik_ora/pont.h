/*

KONSTRUKTOR

- neve megegyezik az osztály nevével
- visszatérési típusa nincs (még void sem), visszaadott érték sincs
- példányosításkor hívódik meg
- feladata az objektum kezdõállapotának beállítása, inicializálása
- túlterhelhetõ
- három típusa van:
	- alapértelmezett konstruktor
	- paraméteres konstruktor
	- másoló konstruktor

DESTRUKTOR

- neve: ~osztálynév
- visszatérési típusa nincs
- minden objektumra egyszer hívódik meg: az objektum "életének végén"
- nem terhelhetõ túl

*/

#include <iostream>
#include <cmath> // ez a javasolt, mert a math.h C nyelvhez van!

using namespace std;

class Pont{
    private:
        double x ,y;
    public:
     // KONSTRUKTOROK      
           
     // alapértelmezett (default) (paraméter nélküli) konstruktor:
        Pont() {x=0.0; y=0.0;}
     // Másik mód: 
     // Pont() : x(0.0),y(0.0) {};      <- mindig mûködik (felsõ lehet h néha nem)
        
     // paraméteres konstruktor:
        Pont(double xx, double yy) {x=xx; y=yy;};
     // pont.cpp-ben így kéne:
     // Pont::Pont(double xx, double yy) {x=xx; y=yy;};
     // Másik mód:
     // Pont(double xx, double yy) : x(xx), y(yy) {};
     
     // másoló konstruktor (egy már meglévõ objektum állapotát bemásolja az újba kezdõértékként):
        Pont(const Pont &A) {x=A.x; y=A.y;}; // private ellenére hozzáférhetõ, mert osztályon belül vagyunk
        // & ==> megmarad az eredeti objektum és csak a címe adódik át
     // Másik mód:
     // Pont(const Pont &A) : x(A.x),y(A.y) {};
        
        
        
     // DESTRUKTOR
     
        ~Pont() {};
        
        
        
        
        void setX(double xx);
        void setY(double yy);
        double getX()const;
        double getY()const;
        double dd(Pont xxx, Pont yyy);
        
        
        // 3.ÓRA
        
        // a const a végére azért kell, hogy az objektum ne módosuljon a fv. hatására!!!
        double d(const Pont& P)const;
        double d()const;
        
        Pont felezo(const Pont& B)const;
        Pont felezo()const;
        Pont felezo(const Pont& B, double m, double n)const;
        void kiir();
        
};

// Osztályon kívüli távolságmérés fv.prototípusa
double dist(const Pont& A, const Pont &B);


// 3. ÓRA
// Operátortúlterhelés:
ostream& operator<<(ostream& os, const Pont& P){
         os<<"( "<<P.getX()<<" , "<<P.getY()<<" )"<<endl;
         return os;
}
