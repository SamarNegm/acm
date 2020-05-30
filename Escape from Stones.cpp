#include<string>
#include<stdio.h>
#include<iostream>
using namespace std;
int a[1000003];
int main()
{
    int sp=0,i=1;
    string s;
cin>>s;
    int ep=s.length()-1;
while(i<=s.length())
{
    if(s[i-1]=='l')
    {
        a[ep]=i++;
        ep--;

    }
    else
    {
        a[sp]=i++;;
        sp++;
    }
}
for(int i=0;i<s.length();i++)
    printf("%d\n",a[i]);



}
