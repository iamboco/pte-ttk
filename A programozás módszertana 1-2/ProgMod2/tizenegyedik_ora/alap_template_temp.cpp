#include <iostream>

using namespace std;

class racionalis{
private:
	int szamlalo;
	int nevezo;
	void egyszerusit(){
		int a=szamlalo, b=nevezo;
		if(a<0)a *= -1;
		while(a!=b){
			if(a<b) b-=a;
			else a -= b;
		}
		szamlalo /= b;
		nevezo /= b;
	}
public:
	racionalis(int inSzamlalo=1, int inNevezo=1){
		szamlalo=inSzamlalo;
		if(inNevezo==0){
			throw "A nevezo 0!!";
		}
		else{
			nevezo=inNevezo;
		}
		if(nevezo<0){
			szamlalo *= -1;
			nevezo *= -1;
		}
		egyszerusit();
	}
	
    friend ostream& operator<<(ostream& os, const racionalis& r){
     if (r.nevezo!=1) os<<r.szamlalo<<" / " <<r.nevezo; else os<<r.szamlalo;
     return os;
    }

};


int main(){
	
	racionalis x(-12,42), y(1,-3);
	cout << "x= " << x<< ", y= " << y<<endl;
	cout << "max(x,y)="<<maximum(x,y)<<endl;
	csere(x,y);
	cout<<"Ertekuk csere utan:"<<endl;
	cout << "x= " << x<< ", y= " << y<<endl;
	
	int a[10]={5,4,3,2,1,-1,-2,-3,-4,-5};
	for (int i=0;i<10;++i) cout<<a[i]<<" "; cout<<endl;
	rendez(a,sizeof(a)/sizeof(int));
	for (int i=0;i<10;++i) cout<<a[i]<<" "; cout<<endl;
	char c[]="valaminagyonhosszuszovegislehetne";
	rendez(c,sizeof(c)-1);
	for (int i=0;i<sizeof(c)-1;++i) cout<<c[i]<<" "; cout<<endl;
	racionalis z(-3,2);
	racionalis r[3]={x,y,z};
	for (int i=0;i<3;++i) cout<<r[i]<<"  "; cout<<endl;
	rendez(r,3);
	for (int i=0;i<3;++i) cout<<r[i]<<"  "; cout<<endl;
   	system("pause");
}

	
