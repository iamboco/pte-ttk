#include <iostream>
using namespace std;

string novel(string szam) {
    string eredm;
    eredm=szam;
    string::size_type i,hossz=szam.size();
    int atvitel=1;
    for(i=hossz-1;i>=0 && atvitel==1;i--) {
       if(szam[i]!='9') {eredm[i]++; atvitel=0;}
       else {eredm[i]='0';}
    }
    if(eredm[0]=='0') eredm="1"+eredm;
    return eredm;      
}

int main() {
    string szam;
    bool joe;
    
    do {
      cout<<"Adjon meg egy pozitiv egeszet:\n";
      getline(cin,szam);
      joe=true;
      for(string::size_type i=0;i<szam.size();i++)
         if(!isdigit(szam[i])) joe=false;
      }
    while(!joe || szam=="0");
    
    cout<<"Az egyel novelt ertek:\n"<<novel(szam)<<endl;
    
    system("pause");
}
