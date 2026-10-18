/*
  Sablonosítás
  (template)
  
  pl. csere:
      void csere(int& a, int& b){
      int temp;
      temp=a;
      a=b;
      b=temp;
  (minden más típusra meg kellene írni, vagy:)
  
  template<class T>
     void csere(T& a, T& b){
     T temp;
     temp=a;
     a=b;
     b=temp;
}
}
*/

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
    
    friend bool operator < (const racionalis& bal, const racionalis& jobb){
           return (bal.szamlalo*jobb.nevezo<jobb.szamlalo*bal.nevezo);
    }
    
    friend racionalis maximum(const racionalis& x, const racionalis& y){
           /*
           int kozosnevezo;
           int xszamlalo, yszamlalo;
           kozosnevezo = x.nevezo*y.nevezo;
           
           xszamlalo=x.szamlalo*(kozosnevezo/x.nevezo);
           yszamlalo=y.szamlalo*(kozosnevezo/y.nevezo);
           
           return (xszamlalo>yszamlalo)?  x : y;
           */

           
           return (x<y)? y : x;
    }
    
    /*
    friend void csere(racionalis &x, racionalis &y) {
           racionalis temp;
           temp.szamlalo = x.szamlalo;
           temp.nevezo = x.nevezo;
           x.szamlalo = y.szamlalo;
           x.nevezo = y.nevezo;
           y.szamlalo = temp.szamlalo;
           y.nevezo = temp.nevezo;
     }
     */
};




/*
void rendez(int t[], int elemszam);
void csere(int& a, int& b);
*/
template<class T>
void rendez(T t[], int elemszam);
template<class T>
void csere(T& a, T& b);
template<class T>
T maximum(T& a, T& b);


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
	/* rendez(r,3);
	for (int i=0;i<3;++i) cout<<r[i]<<"  "; cout<<endl;
   	*/
    system("pause");
}


// Rendezés csak egészre: (alapváltozat)
/*
void rendez(int t[], int elemszam){      // (bugyborékos)
     for(int y=0; y<elemszam; y++)
         for(int x=0; x<elemszam-1-y; x++){
             if(t[x]>t[x+1]) {
                             int temp=t[x+1];
                             t[x+1]=t[x];
                             t[x]=temp;
                             }
             }
}
*/

/*
// Rendezés csak egészre: (csere fv.-el)
void rendez(int t[], int elemszam){      // (bugyborékos)
     for(int y=0; y<elemszam; y++)
         for(int x=0; x<elemszam-1-y; x++) 
                 if(t[x]>t[x+1]) csere(t[x],t[x+1]);

}

// Csere csak egészre:
void csere(int& a, int& b){
     int temp;
     temp=a;
     a=b;
     b=temp;
}
*/

template<class T>
void rendez(T t[], int elemszam){      // (bugyborékos)
     for(int y=0; y<elemszam; y++)
         for(int x=0; x<elemszam-1-y; x++) 
                 if(t[x]>t[x+1]) csere(t[x],t[x+1]);

}


template<class T>
void csere(T& a, T& b){
     T temp;
     temp=a;
     a=b;
     b=temp;
}

template<class T>
T maximum(T& a, T& b){
             return (a<b)? b : a;
}
