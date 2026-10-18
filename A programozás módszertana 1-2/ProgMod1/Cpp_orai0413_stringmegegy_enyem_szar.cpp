#include <iostream>
#include <string>

using namespace std;

string novel(string);

int main() {
    string x;
    cout<<"Kerek egy szamot";
    getline(cin,x);
    
    cout<<"A megnovelt szam:"<<novel(x);
    system("pause");
}

string novel(string szam) {
        string kimenet(szam);
        for (int i=(kimenet.size()-1); i>=0 ;i--) {
                if (i==0) {
                                kimenet[i]='0';
                                kimenet.insert(1,'1');
                }
                if (kimenet[i]=='9') { 
                                kimenet[i-1]++;
                                kimenet[i]='0';
                }
        return kimenet;
}
