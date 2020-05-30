#include<iostream>
using namespace std;
bool is_vowel(char c)
{
    if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
        return true;
    return false;
}
int main()
{

    string x;int cont1=0,cont2=0,cont3=0;
    getline(cin,x);
    for(int i=0;i<x.length();i++)
    {
       if(is_vowel(x[i]))
        cont1++;
    }
       getline(cin,x);
    for(int i=0;i<x.length();i++)
    {
       if(is_vowel(x[i]))
        cont2++;
    }
       getline(cin,x);
    for(int i=0;i<x.length();i++)
    {
       if(is_vowel(x[i]))
        cont3++;
    }
cout<<(cont1==5&&cont2==7&&cont3==5?"YES":"NO");


    return 0;
}
