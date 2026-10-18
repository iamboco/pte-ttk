#include <iostream>

using namespace std;
int fakt(int n);
int faktnemrek(int n);

int main() {
    int a;
    cout<<"Kerek egy szamot: ";
    cin>>a;
    cout<<fakt(a)<<endl;
    
    cout<<faktnemrek(a)<<endl;
    system("pause");
}

int fakt(int n){
    return (n==0 || n==1) ? 1 : n*fakt(n-1);
}

int faktnemrek(int n){
    int eredm;
    if (n==0 || n==1) return 1;
       else {
            for(eredm=1; n>0 ;n--) eredm*=n;
            return eredm;
            }
}
