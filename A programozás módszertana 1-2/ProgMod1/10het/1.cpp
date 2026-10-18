#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream fout ("test.dat");
    fout<<"Tom Tommy"<<"\t"<<"#5435"<<"\n";
    fout<<"Raplh Rolof"<<"\t"<<"#letiltva"<<"\n";
    fout<<"Ted Terry"<<"\t"<<"#6922"<<"\n";
    fout<<"Harry Holden"<<"\t"<<"#fuggoben"<<"\n";
    fout<<"Skip Jones"<<"\t"<<"#8875"<<"\n";
    fout.close();
    system("pause");
}
