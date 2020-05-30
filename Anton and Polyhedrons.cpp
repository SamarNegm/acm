#include<iostream>
using namespace std;
int main()
{
    int x,sum=0;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        string s;
        cin>>s;
        if(s=="Tetrahedron")
        sum+=4;
        else if(s=="Octahedron")
            sum+=8;
        else if(s=="Dodecahedron")
            sum+=12;
        else if(s=="Cube")
        sum+=6;
        else
            sum+=20;

    }
cout<<sum;



    return 0;
}
