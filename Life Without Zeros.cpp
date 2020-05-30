#include<iostream>
using namespace std;

string inv(int x)
{
  string ans="";
  while(x)
  {
      ans+=(x%10+'0');
      x/=10;
  }
  string ans2="";
  for(int j=ans.length()-1;j>=0;j--)
  ans2+=ans[j];
  return ans;
}

int main()
{
int a,b;

   cin>>a>>b;
   int sum=a+b;
    string aa= inv(a);
     string bb=  inv(b);
         string ss=inv(sum);
   for(int i=0;i<min(aa.length(),min(bb.length(),ss.length()));i++)
   {
     if((bb[i]=='0'&&(bb[i]!='0'||ss[i]!='0'))||aa[i]=='0'&&(bb[i]!='0'||ss[i]!='0'))
     {
         cout<<"NO";
         return 0;
     }
     else
        if((ss[i]=='0'&&aa[i]!='0')||(ss[i]=='0'&&bb[i]!='0'))
         {
         cout<<"NO";
         return 0;
     }
   }

    cout<<"YES";


    return 0;
}
