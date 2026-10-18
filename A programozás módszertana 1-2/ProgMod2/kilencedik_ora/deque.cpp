#include <iostream>
#include <deque>

using namespace std;

void kiir(const string& szoveg, const deque<int>& v);

int main()
{
    const char db = 10;
    
    deque<int> deq(db);
    
    for(unsigned char i=0; i<deq.size(); ++i) deq[i] = i*i;
    kiir("A sor tartalma: ",deq);
    
    double atlag = 0.0;
    for(unsigned char i=0; i<deq.size(); ++i) atlag += deq[i];
    atlag /= deq.size();
    cout<<"A sor elemeinek atlaga: ";
    cout<<atlag<<endl;
    
    deq.push_back(100);
    deq.push_back(121);
    
    deq.pop_back();
    
    kiir("A sor tartalma: ",deq);
    
    
    cout<<endl<<"A sor elso eleme: "<<deq[0];
    cout<<endl<<"A sor elso eleme: "<<*deq.begin();
    cout<<endl<<"A sor utolso eleme: "<<deq[deq.size()-1];
    cout<<endl<<"A sor utolso eleme (nem jo): "<<*deq.end();
    cout<<endl<<"A sor utolso eleme: "<<*(deq.end()-1);
    cout<<endl;
    deque<int>::iterator p = deq.begin();
    cout<<deq[2]<<endl;
    cout<< *(p+2) <<endl;
    cout<< *(++p) <<endl;
    cout<< *(--p) <<endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}

void kiir(const string& szoveg, const deque<int>& v){
     cout<<endl<<szoveg;
     
     for(deque<int>::const_iterator iter=v.begin(); iter!=v.end(); ++iter){
                               cout<<*iter<<'\t';
     }
     cout<<endl<<endl;
}
