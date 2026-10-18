class Alakzat {
      public:
             double ered1, ered2;
             virtual void szamol1()=0;
             virtual void szamol2()=0;
             virtual void kiir()=0;
};

class Teglalap : public Alakzat {
      private:
             double a,b;
      public:
             Teglalap(double a1, double b1);
             void szamol1();
             void szamol2();
             void kiir();
};

class Kor : public Alakzat {
      private:
             double r;
      public:
             Kor(double r1);
             void szamol1();
             void szamol2();
             void kiir();
};
