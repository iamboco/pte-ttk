#include <iostream>
#include <cmath>

using namespace std;

class Pont{
    private:
        double x ,y;
    public:
        Pont() {x=0.0; y=0.0;}
        Pont(double xx, double yy) {x=xx; y=yy;};
        Pont(const Pont &A) {x=A.x; y=A.y;};
        
        ~Pont() {};
        
        void setX(double xx);
        void setY(double yy);
        double getX()const;
        double getY()const;
        double dd(Pont xxx, Pont yyy);
        
        double d(const Pont& P)const;
        double d()const;
        
        Pont felezo(const Pont& B)const;
        Pont felezo()const;
        Pont felezo(const Pont& B, double m, double n)const;
        void kiir();
        
        //Pont& operator = (const Pont& A);
        //bool operator == (const Pont& A)const;
        //bool operator != (const Pont& A)const;
        //Pont operator + (const Pont& A)const;
        //Pont operator - (const Pont& A)const;
        //Pont operator - (const double& A)const;
        //Pont operator + (const double& A)const;
        //Pont operator * (const double& A)const;
        //Pont& operator += (const Pont& A);
        
        //Pont operator ++ ();
        //Pont& operator ++ (int);
        
        // Ötödik óra

        // friend: Osztályon belül vannak deklarálva, de nem tagjai az osztálynak
        // a privát adattagokhoz való közvetlen hozzáférést teszi lehetõvé        

        // ezeknek nem kell a végére const, mert ott van belül a második operandusra
        
        friend Pont operator + (const Pont& A, const Pont& B);
        
        friend ostream& operator << (ostream& os, const Pont& A);
        
        // friend void operator = (Pont& A, const Pont& B);
        // (nem jó, nem túlterhelhetõ a = !!!)
        
        friend bool operator == (const Pont& A, const Pont& B);
        
        friend void operator += (Pont& A, const Pont& B);
        
        friend Pont operator - (Pont& A, const Pont& B);
        
        friend Pont operator - (Pont& A, const double& B);
        
        friend bool operator != (const Pont& A, const Pont& B);
        
        friend Pont operator + (const Pont& A, const double& B);
        
        friend Pont operator * (const Pont& A, const double& B);
        
        friend Pont operator ++ (Pont& A);
        
        friend Pont operator ++ (Pont& A, int);
};

double dist(const Pont& A, const Pont &B);

