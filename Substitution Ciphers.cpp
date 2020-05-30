#include<bits/stdc++.h>
using namespace std;
int a[26];
string s="",chipherText="",ENCRYPTED="",test,decr="";
string subsitution(int k,string s)
{
    string temp="";
    for(int i=0; i<s.length(); i++)
    {
        // cout<<(int)('z')<<"   "<<(int)(s[i]+k)%97<<"\n";
        temp+=(char)((int)(s[i]-'a'+k)%26+'a');
    }
    return temp;
}
string dec_subsitution(int k,string s)
{
    string temp="";
    for(int i=0; i<s.length(); i++)
    {

        temp+=(char)((int)(s[i]-'a'-k+26)%26+'a');
    }
    return temp;
}
int main()
{

    for(int i=1; i<=26; i++)
    {
        int x=rand()%26;

        if(!a[x])
        {
            s+=(char)(x+'a');
            a[x]=1;
        }
        else
        {

            for(int k=rand()%26; k<26; k++)
                if(!a[k])
                {
                    s+=(char)(k+'a');
                    a[k]=1;
                    break;
                }
        }
    }
    cout<<"the random equal chipherText: "<<s<<"\n\n";;
    chipherText=s;
    cout<<"ENTER SOMTHING TO ENCRYPT\n";
    cin>>test;
    for(int i=0; i<test.length(); i++)
    {

        ENCRYPTED+=chipherText[(test[i]-'a')];
    }
    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;//using +- number
    ;;;;;;;;;;;;;;;;;;;;;;;;;;;
    cout<<"Enter the Key\n";
    int key;
    cin>>key;

    cout<<"the encryption using fixed key\n"<<subsitution(key,test)<<"\n";
    cout<<"the decryption using fixed key\n"<<dec_subsitution(key,subsitution(key,test))<<"\n";


    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;//using random equla chipherText
    cout<<"  ,,,,,,,  "<<chipherText<<",,,,,,,,,,,\n";
     for(int i=0;i<ENCRYPTED.length();i++)
       {
           for(int j=0;j<=26;j++){
          if( ENCRYPTED[i]==chipherText[j])
           decr+=(char)(j+'a');
           }
       }
    cout<<"The encryption using random equal chipherText is\n\n";

       cout<<ENCRYPTED<<"\n\n";
       cout<<"The decryption using random equal chipherText is\n\n";
       cout<<decr<<"\n\n";







    return 0;
}

