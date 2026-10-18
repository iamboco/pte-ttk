#include <iostream>

using namespace std;

double hatvanyozas(double,int);

int main() {
    double a;int b;
    cout<<"Kerem az alapot: ";cin>>a;
    cout<<"Kerem a kitevot: ";cin>>b;
    cout<<hatvanyozas(a,b)<<endl;
    system("pause");
}

double hatvanyozas(double x,int y){
       /* SZAR */
       double z=x;
       if (y==0) return 1;
       else if (y<0) while(y) {
                                if (!(y&1)) {y<<=1; z/=z;}
                                   else {z/=x; y++;}
                                }
       else while(y) {
                                if (!(y&1)) {y>>=1; z*=z;}
                                   else {z*=x; y--;}
                                }
       return z;
}
