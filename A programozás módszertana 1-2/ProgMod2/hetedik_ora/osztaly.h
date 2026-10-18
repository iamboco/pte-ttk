class Alap {
      protected:
           double x,y,ered;
      public:
           Alap(double x1, double y1);
           virtual void szamol();
           // virtuális -> jelentése futás során derül ki
           void kiir();
           void vegrehajt(){ szamol(); };
};

class Szarm : public Alap {
      public:
           Szarm(double x1, double y1);
           void szamol();
};
