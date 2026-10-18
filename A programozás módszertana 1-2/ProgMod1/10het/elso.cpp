char ch;
fin.get(ch);
cout<<ch;

char str[256];
do {fin.getline(str,255);
cout<<str<<endl;}
while (!fin.eof());
