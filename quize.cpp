#include<iostream>
#include<fstream>
using namespace std;
class t
{

public:
    fstream obj;
    ins(string s)
    {



        obj.open("C:\\Users\\samar\\Desktop\\he.txt",ios::in|ios::app|ios::out);
        obj<<s<<"|";

        obj.close();
    }
    read( t obj2)
    {
        string str;
        while(!obj.eof())
        {

            obj>>str;

            cout<<str<<"|";
        }



    }


};

int main()
{
    t obj;

    obj.ins("hellow world");

//obj.read(obj);

    return 0;
}
