#include<iostream>
using namespace std;
int b[27],a[27],c[27],fb=1,m=1e10;
int main()
{
    string aa,bb,cc;
    cin>>aa>>bb>>cc;
    for(int i=0; i<aa.length(); i++)
    {
        a[aa[i]-'a']++;
        b[aa[i]-'a']++;
        c[aa[i]-'a']++;
    }
    for(int i=0; i<bb.length(); i++)
    {
        if(!a[bb[i]-'a']&&i>0)
        {
            fb=0;
            break;
        }
        b[bb[i]-'a']--;
    }
    if(!fb)
    {
        for(int i=0; i<cc.length(); i++)
        {

            c[cc[i]-'a']--;
        }
        for(int i=0; i<27; i++)
        {
            if(a[i]>=c[i]&&(a[i]/(a[i]-c[i])<m))
                m=(a[i]/c[i]);
        }
        for(int i=0; i<m; i++)
            cout<<cc;
        for(int i=0; i<27; i++)
        {
            if(cc[cc.length()-1]=='a'&&i==0)
            {
                for(int j=0; j<c[1]; j++)
                    cout<<(char)('a'+i);
                i++;
                for(int j=0; j<c[0]; j++)
                    cout<<(char)('a'+i);


            }
            for(int j=0; j<c[i]; j++)
                cout<<(char)('a'+i);
        }


    }
 for(int i=0; i<27; i++)
        {
            if(a[i]>=b[i]&&(a[i]/(a[i]-b[i])<m))
                m=(a[i]/b[i]);
        }
        for(int i=0; i<m; i++)
            cout<<bb;

    for(int i=0; i<27; i++)
    {
        if(bb[bb.length()-1]=='a'&&i==0)
        {
            for(int j=0; j<b[1]; j++)
                cout<<(char)('a'+i);
            i++;
            for(int j=0; j<b[0]; j++)
                cout<<(char)('a'+i);


        }
        for(int j=0; j<b[i]; j++)
            cout<<(char)('a'+i);
    }





    return 0;
}
