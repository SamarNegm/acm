#include<bits/stdc++.h>
using namespace std;
string str="";
int q[26];
int sorted[26];
void showMatrix(int key,string s)
{
    int x=0;
    for(int i=0; i<s.length(); i++)
    {
        if(x==key)
        {
            cout<<"\n";
            x=0;
        }
        cout<<s[i]<<" ";
        x++;

    }
    cout<<"\n\n";


}
string transposition(int key,string s)
{

    string decr="";
    int clom=(s.length()/key)+(s.length()%key!=0);
    for(int j=0; j<key; j++)
    {
        for(int i=0; i<clom; i++)
        {


            if((i*key+j)<s.length())decr+=s[(i*key)+j];
        }
        // decr+=" ";
    }
    return decr;
}
//meet at three pm today at the usual location
string transposition(string key,string s)
{

 string decr="";
    int clom=(s.length()/key.length())+(s.length()%key.length()!=0);
    cout<<clom<<"  colm\n";
    for(int j=0; j<key.length(); j++)
    {

        for(int i=0; i<clom; i++)
        {
            cout<<i*key.length()+sorted[j]<<"\n";
            if((i*key.length()+sorted[j])<s.length())decr+=s[(i*key.length())+sorted[j]];
        }
       // decr+=" ";
    }
    return decr;
}
string decrypt(int key,string s)
{
    string decr="";
    int raw=(s.length()/key)+(s.length()%key!=0);
    //cout<<"  raw  "<<raw<<"\n"<<s<<"  s\n";
    for(int i=0; i<raw; i++)
    {
        for(int j=0; j<key; j++)
        {
           // cout<<j*raw+sorted[i]<<"\n";

            if((j*raw+sorted[i])<s.length())decr+=s[(j*raw)+sorted[i]];
        }
        // decr+=" ";
    }
    return decr;

}
string decrypt(string key,string s)
{
    string decr="";
    int raw=(s.length()/key.length())+(s.length()%key.length()!=0);
    cout<<"  raw  "<<raw<<"\n"<<s<<"  s\n";
    for(int i=0; i<raw; i++)
    {
        for(int j=0; j<key.length(); j++)
        {
            cout<<j*raw+i<<"\n";

            if((j*raw+i)<s.length())decr+=s[(j*raw)+i];
        }
        // decr+=" ";
    }
    return decr;

}

int main()
{
    int c=0,k=0;
    string s[1000];
    string m;
    cout<<"enter the text \n";
    while(true)
    {
        getline(cin,s[c]);
        if(s[c]=="0")
            break;
        c++;
    }
    for(int j=0; j<c; j++)
        for(int i=0; i<s[j].length(); i++)
            if(s[j][i]!=' ')str+=s[j][i];
    cout<<str<<"\n\n";
    cout<<"Enter 1 for numrical or 2 for string key\n";
    int x;
    cin>>x;
    if(x==1)
    {
        cout<<"Enter the  key\n";
        cin>>k;
        string test=transposition(k,str);
        showMatrix(k,str);
        cout<<test<<"\n\n";
        cout<<decrypt(k,test)<<"\n\n";

    }
    else
    {
        int x=0,y=0;
        cout<<"Enter the  key\n";
        cin>>m;
        showMatrix(m.length(),str);
        for(int i=0; i<26; i++)
        {
            for(int j=0; j<m.length(); j++)
            {
                if(m[j]==(char)(i+'a'))
                {
                    sorted[x++]=j;
                    break;

                }
            }


        }
        for(int i=0; i<m.length(); i++)
            cout<<sorted[i]<<"  ";
        cout<<m<<"\n";
        cout<<transposition(m,str)<<" tarnsposition\n";
        cout<<decrypt(m,transposition(m,str));
    }


//at four surveillance on enemy campa



    return 0;
}
