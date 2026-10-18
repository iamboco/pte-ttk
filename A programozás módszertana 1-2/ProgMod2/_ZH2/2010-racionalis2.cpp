#include <iostream>
using namespace std;

class Racionalis{
      private:
              int szamlalo, nevezo;
              void egyszerusit(){
                   if(nevezo<0){szamlalo*=-1;nevezo*=-1;}
                   int nagyobb=szamlalo, kisebb=nevezo, tmp;
                   if(nagyobb<0)nagyobb *=-1;
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
             
             Racionalis operator-(const Racionalis &j) const {
                        return Racionalis(szamlalo*j.nevezo-j.szamlalo*nevezo,nevezo*j.nevezo);
                        }
                        
             bool operator==(const Racionalis &j) const {
                  return(nevezo==j.nevezo && szamlalo==j.szamlalo);
                  }
                  
             bool operator<(const Racionalis &j) const {
                  return (szamlalo*j.nevezo < j.szamlalo*nevezo);
                  }
             
             friend ostream& operator<<(ostream &os, const Racionalis &r);

      };

ostream& operator<<(ostream &os, const Racionalis &r){
         os<<r.szamlalo<<" / "<<r.nevezo;
         return os;}

main(){
       Racionalis x(-2,4), y(1,5), z;
       z=x-y;
       cout<<z<<endl;
       if(x==y)cout<<"egyenlo!"<<endl;
       else cout<<"nem egyenlo!"<<endl;
       system("pause");
       }
