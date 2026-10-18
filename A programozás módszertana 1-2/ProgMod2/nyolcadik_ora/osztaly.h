using namespace std;

struct aru {
       char nev[15];
       int darab;
       double egysegar;
};

class Raktar {
      private:
              aru* rak;
              static int arufajta;
              int osszdarab;
              double osszar;
      public:
              Raktar();
              ~Raktar();
              void keszlet();
              void kiir();
};
