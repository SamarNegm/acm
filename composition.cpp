#include<iostream>
using namespace std;
int main()
{

string s,temp="",enc="";
getline(cin,s);
for(int i=0;i<s.length();i++)
    if(s[i]!=' ')
    temp+=s[i];
s=temp;
temp="";
for(int i=0,j;i<s.length();i++)
{
    cout<<(char)((s[i]-'a')/5+'a')<<"\n"<<(char)((s[i]-'a')%5+'a')<<" \n";
    temp+=(char)((s[i]-'a')/5+'a');
    temp+=(char)((s[i]-'a')%5+'a');
}
cout<<temp<<"\n";
for(int i=0,j=temp.length()/2;i<temp.length()/2;i++,j++)
{
    cout<<temp[i]<<"  "<<temp[j]<<"\n";
    enc+=(char)((temp[i]-'a')*5+(temp[j]-'a')+'a');


}
cout<<enc<<"\n";
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
s=enc;
temp="";
for(int i=0;i<enc.length();i++)
{
    temp+=(char)((s[i]-'a')/5+'a');
     temp+=(char)((s[i]-'a')%5+'a');
}
string temp2="";
enc="";
for(int i=0;i<temp.length();i+=2)
    temp2+=temp[i];

for(int i=1;i<temp.length();i+=2)
    temp2+=temp[i];

for(int i=0;i<temp2.length();i+=2)
{
    cout<<temp2[i]<<"  "<<temp2[i+1]<<"   "<<((temp2[i]-'a')*5+(temp2[i+1]-'a'))<<"\n";
    enc+=(char)((temp2[i]-'a')*5+(temp2[i+1]-'a')+'a');


}

cout<<"\n"<<enc<<"  dec\n";



    return 0;
}
