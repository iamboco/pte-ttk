class Muvelet{
      private:
              double hatvany;
              void hibaJelzes();
      protected:
              double a,b,ered;
      public:
              Muvelet(double a1,double b1);
              void szamol();
              void hatvanyoz();
              void kiir();
};

class UjMuvelet : public Muvelet{
      private:
              int jel;
      public:
              UjMuvelet(double a1, double b1, int jel1);
              void szamol();
              void kiir();
};
