//az osztály deklarációja
//private, protected, public;
#include<iostream>
using namespace std;

class Pont{
    private:// "rejtett", osztályon kivül nem lehet hozzáférni
        double x ,y;
    public:
        void setX(double xx);
        void setY(double yy);
        double getX()const; //az objektum nem változhat
        double getY()const; //leolvasás(függvény hivás hatására) közben
};
