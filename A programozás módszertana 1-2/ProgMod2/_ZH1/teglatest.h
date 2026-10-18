#include <iostream>
#include <cmath>


using namespace std;

class Teglatest {
private:
        double a, b, c, felsz, terf;
        void TeglatestFelszin();
        void TeglatestTerfogat();
public:
       Teglatest(){
                       a=1.0; b=1.0; c=1.0;
                       TeglatestFelszin();
                       TeglatestTerfogat();
                       };
                       
       Teglatest(double a0, double b0, double c0){
                            a=a0; b=b0; c=c0;
                            TeglatestFelszin();
                            TeglatestTerfogat();
                            };
                            
       /* Teglatest(const Teglatest &T){
                a=T.a; b=T.b; c=T.c;
                TeglatestFelszin();
                TeglatestTerfogat();
                };
       */
       
       double GetFelszin();
       double GetTerfogat();
       double testatlo();
       
       Teglatest& operator = (const Teglatest& T);
       bool operator == (const Teglatest& T)const;
       bool operator != (const Teglatest& T)const;
       friend Teglatest operator * (const  Teglatest& T,  const  int& szam);
       friend ostream& operator << (ostream&   os,   const   Teglatest&  T);
};

