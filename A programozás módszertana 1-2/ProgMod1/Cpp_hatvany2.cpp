#include <iostream>

using namespace std;

int main() {
    /*Be: a,b pozitív egészek Ki: a^b */
    int a,b; float c=1;
    cout<<"Kerem az alapot: ";cin>>a;
    cout<<"Kerem a kitevot: ";cin>>b;
    if (b==0) c=1;
       else if (b<0) while(b++) {       /* gyorsabb módszerrel */
                                if (!(b&1)) {b<<=1; c*=c;}
                 /* A feltétel "if (b%2==0)"-vel ekvivalens,
                                             b<<=1 pedig b/=2-vel*/
                                   else {c*=a; b--;}
                                }
       else while(b--) c*=a;       /* b--!=0 rövidítve, b-- miatt rövidebb a ciklusmag */
    cout<<c<<endl;
    system("pause");
}
