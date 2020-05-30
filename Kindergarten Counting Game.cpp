#include<iostream>
#include<string>
using namespace std;
int main()
{
   string s;
   while(getline(cin,s))
   {


       int sum=0;
         string t="";
         for(int i=0;i<s.length();i++)
            s[i]=tolower(s[i]);
       for(int i=0;i<s.length();i++)
       {

           if(islower(s[i]))
            t+=s[i];
            else
                if(islower(s[i+1]))
                t+=' ';

       }
       int start=0;
for(int i=0;i<t.length();i++)
    if(islower(t[i]))
{
    start=i;
    break;
}
       for(int i=start;i<t.length();i++)
        if(t[i]==' '&&islower(t[i+1]))
        sum++;
       cout<<sum+1<<"\n";

   }
}
