#include<iostream>
using namespace std;
void fun(int x)
{
    if(x==0)
        cout<<"O-|-OOOO\n";
    else if(x==1)
        cout<<"O-|O-OOO\n";
    else
        if(x==2)
        cout<<"O-|OO-OO\n";
    else if(x==3)
        cout<<"O-|OOO-O\n";
        else if(x==4)
        cout<<"O-|OOOO-\n";
            else if(x==5)
            cout<<"-O|-OOOO\n";
                else if(x==6)
                cout<<"-O|O-OOO\n";
                    else if(x==7)
                    cout<<"-O|OO-OO\n";
                        else if(x==8)
                        cout<<"-O|OOO-O\n";
                            else if(x==9)
                            cout<<"-O|OOOO-\n";
}
int main()
{

    string s;
    cin>>s;
    for(int i=s.length()-1;i>=0;i--)
    {
        fun(s[i]-'0');
    }
}
