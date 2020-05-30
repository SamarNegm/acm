#include<iostream>
using namespace std;
int main()
{
    string s,k,enc="",t="";

    cout<<"Enter the palin text\n";
    getline(cin,s);
    cout<<"Enter the key\n";
     getline(cin,k);
        for(int i=0;i<s.length();i++)
        t+=tolower(s[i]);
    s=t;

     for(int j=0,i=0;i<s.length();i++)
     {

         if(j==k.length())
            j=0;
         if(s[i]!=' '){
         enc+=(char)(((s[i]-'a')+(k[j]-'a'))%26+'a');
            j++;
         }

     }
    cout<<enc<<"\n";
    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    s=enc;


    string dec="";
       for(int j=0,i=0;i<s.length();i++)
     {

         if(j==k.length()){
            j=0;
         }
      if(s[i]!=' '){

         dec+=(char)((((s[i])-(k[j])+26))%26+'a');
            j++;
         }

     }
     cout<<"\nThe decryption of the result \n"<<dec<<"\n";

    return 0;
}
