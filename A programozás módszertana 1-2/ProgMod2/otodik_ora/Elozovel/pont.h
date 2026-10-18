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
        
        Pont& operator = (const Pont& A);
        bool operator == (const Pont& A)const;
        bool operator != (const Pont& A)const;
        Pont operator + (const Pont& A)const;
        Pont operator - (const Pont& A)const;
        Pont operator - (const double& A)const;
        Pont operator + (const double& A)const;
        Pont operator * (const double& A)const;
        Pont& operator += (const Pont& A);
        
        Pont operator ++ ();
        Pont& operator ++ (int);
};

double dist(const Pont& A, const Pont &B);

// Származtatás kiegészítés

class Kor : public Pont{
      protected:
                double sugar;
                double kerulet, terulet;
      public:
                Kor(double kx,double ky, double sug);
                void ker();
                void ter();
                void kiir();
                double getSugar();
};

class Gomb : public Kor{
      protected:
                double felszin, terfogat;
      public:
                Gomb(double x, double y, double sug);
                void felsz();
                void terf();
                void kiir();
};
