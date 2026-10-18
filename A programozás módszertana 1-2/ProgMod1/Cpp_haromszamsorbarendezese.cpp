#include <iostream>

using namespace std;

int main() {
    int a,b,c;
    cout<<"A= ";cin>>a;
    cout<<"B= ";cin>>b;
    cout<<"C= ";cin>>c;
    if (a<c && a<b) { cout<<a<<" ";
                      c<b ? cout<<c<<" "<<b : cout<<b<<" "<<c;
                      }
    if (b<c && b<a) { cout<<b<<" ";
                      c<a ? cout<<c<<" "<<a : cout<<a<<" "<<c;
                      }
    if (c<a && c<b) { cout<<c<<" ";
                      a<b ? cout<<a<<" "<<b : cout<<b<<" "<<a;
                      }
    system("pause");
}
