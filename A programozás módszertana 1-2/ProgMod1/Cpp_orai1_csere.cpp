#include <iostream>

using namespace std;

void csere(int&, int&);
void csereb(int&, int&);

int main() {
    int x=10,y=20;
    csere(x,y);
    csereb(x,y);
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;
    system("pause");
    return 0;
}

/* C változat:
void csere(int *a, int *b){
     int swap;
     swap=*a;
     *a=*b;
     *b=swap;
} 

C++ át tudja konvertálni címmé:
*/

void csere(int& a, int& b){
     int swap;
     swap=a;
     a=b;
     b=swap;
}

void csereb(int& a, int& b){
     b+=a;
     a=b-a;
     b-=a;
}
