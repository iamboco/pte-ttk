#include <iostream>

using namespace std;

template<class T>
T atmero(T t[], int elemszam);

int main(){
	int elemsz;
	double *tomb;
	
	cout<<"Kerem a tomb elemszamat: ";
	cin>>elemsz;
	tomb = new double[elemsz];
	for(int i=0; i<elemsz; i++) {
            cout<<i+1<<". szam: ";
            cin>>tomb[i];
    }
	
	cout<<"Az atmero: "<<atmero(tomb, elemsz)<<endl;
	
    system("pause");
}


template<class T>
T atmero(T t[], int elemszam){
    T maximum, minimum;
    maximum=minimum=t[0];
    for(int x=0; x<elemszam; x++) {
            if(maximum<t[x]) maximum=t[x];
            if(minimum>t[x]) minimum=t[x];
    }
    return maximum-minimum;
}
