
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
//   cout<<clom<<"  colm\n";
    for(int j=0; j<key.length(); j++)
    {

        for(int i=0; i<clom; i++)
        {

            if((i*key.length()+sorted[j])<s.length())decr+=s[(i*key.length())+sorted[j]];
        }
        // decr+=" ";
    }
    return decr;
}
string decrypt(int key,string s)
{
    string decr="";
    int clom=(s.length()/key)+(s.length()%key!=0);
    for(int i=0; i<clom; i++)
    {
        for(int j=0; j<key; j++)
        {

            if(clom*j+i<s.length())decr+=s[clom*j+i];

        }
        // decr+=" ";
    }
    return decr;

}
string decrypt(string key,string s)
{
    string decr="";

    showMatrix(key.length(),s);
    int clom=(s.length()/key.length())+(s.length()%key.length()!=0);
    for(int i=0; i<clom; i++)
    {
        for(int m=0; m<key.length(); m++)
            cout<<sorted[m]<<" ";
        ;
        cout<<"\n";
        for(int j=0; j<key.length(); j++)
        {

            if(sorted[j]*clom+i<s.length())decr+=s[sorted[j]*clom+i];
        }
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
           int r=str.length()%k;
        if(r!=0)
        {
            for(int i=0; i<k-r; i++)
                str+=(i+'a');
        }
        showMatrix(k,str);
        string test=transposition(k,str);
        cout<<test<<"\n\n";
        cout<<decrypt(k,test)<<"\n\n";

    }
    else
    {
        int x=0,y=0;
        cout<<"Enter the  key\n";
        cin>>m;
        int r=str.length()%m.length();
        if(r!=0)
        {
            for(int i=0; i<m.length()-r; i++)
                str+=(i+'a');
        }
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
        cout<<transposition(m,str)<<"\n\n";
        cout<<decrypt(m,transposition(m,str));
    }


//at four surveillance on enemy campa



    return 0;
}

