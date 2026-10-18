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
       if (x==1.0 || y==0) return 1.0;
       if(!(y&1)) return hatvanyozas(x*x,y/2); /* páros kitevõnél */
       else return x*hatvanyozas(x,y-1);
}
