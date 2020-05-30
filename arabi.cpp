#include<fstream>
#include<iostream>
using namespace std;
int main()
{
    fstream f;
    f.open("C:\\Users\\samar\\Desktop",ios::out);
f.seekp(1,ios::beg);
    cout<<"seekp to 1\n";
    cout<<"tellp="<<f.tellp()<<endl;
    cout<<"tellg="<<f.tellg()<<endl;
    f.seekg(2,ios::beg);


    cout<<"seekg to 2\n";
    cout<<"tellp="<<f.tellp()<<endl;
      cout<<"tellg="<<f.tellg()<<endl;


    f.close();
}
