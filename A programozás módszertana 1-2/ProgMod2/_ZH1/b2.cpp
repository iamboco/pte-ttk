#include <iostream>
         using namespace std;
         class Racionalis{
               private:
               int szamlalo, nevezo;
               void egyszerusit(){
                    if(nevezo<0){szamlalo*=-1;nevezo*=-1;}
                    int nagyobb=szamlalo, kisebb=nevezo, tmp;
                    if(nagyobb<0) nagyobb *=-1;
                    if(kisebb<0)kisebb *=-1;
                    while(nagyobb!=0){
                    if(nagyobb<kisebb){
                                       tmp=nagyobb;
                                       nagyobb=kisebb;
                                       kisebb=tmp;
                                       }
                                       nagyobb-=kisebb;
                    }
                    szamlalo /= kisebb;
                    nevezo /= kisebb;
               }
               public:
               Racionalis(){};
               Racionalis(int sz0, int n0){
                   szamlalo=sz0;
                   nevezo=n0;
                   egyszerusit();
               }
Racionalis operator+(const Racionalis &j) const {
         return Racionalis(szamlalo*j.nevezo+j.szamlalo*nevezo,nevezo*j.nevezo);
}

Racionalis Racionalis::operator - (const int A)const{
     return Racionalis(szamlalo-A*nevezo, nevezo);
}

Racionalis Racionalis::operator / (const int A)const{
     return Racionalis(szamlalo/A, nevezo);
}

Racionalis& Racionalis::operator *= (const Racionalis& A){
     szamlalo=szamlalo*A.szamlalo,
     nevezo=nevezo*A.nevezo;
     return *this;
}



bool operator==(const Racionalis &j) const {
         return(nevezo==j.nevezo && szamlalo==j.szamlalo);
}

friend Racionalis operator / (const int A, const Racionalis& B){
       return Racionalis(B.nevezo*A, B.szamlalo);
}

friend Racionalis operator *= (Racionalis& A, int B){
       A.szamlalo=A.szamlalo*B;
}

friend ostream& operator<<(ostream &os, const Racionalis &r);
};

ostream& operator<<(ostream &os, const Racionalis &r){
         os<<r.szamlalo<<" / "<<r.nevezo;
         return os;}

int main(){
       Racionalis x(-2,4), y(1,5), z;
       z=x+y;
       cout<<z<<endl;
       if(x==y)cout<<"egyenlo!"<<endl;
       else cout<<"nem egyenlo!"<<endl;
       Racionalis a(4,5), b(3,4);
       a*=b; //tagfüggvénnyel oldja meg!!
       cout<<a<<endl;
       cout<<a-3<<endl; //tagfüggvénnyel oldja meg!!
       cout<<b/2<<endl; //tagfüggvénnyel oldja meg!!
       cout<<5/b<<endl; //friend (nem tag)függvénnyel oldja meg!!
       a*=4; //friend (nem tag)függvénnyel oldja meg!!
       cout<<a<<endl;
       system("pause");
       return 0;
}
