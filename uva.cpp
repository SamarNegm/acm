#include<iostream>
#include<algorithm>
using namespace std;
int a[200];
int b[200];
bool cpm(int s,int f)
{
    if(b[s]<b[f])
        return true;
      if(b[s]==b[f]&&s>f)
        return true;

    return false;
}
int main()
{

    string s;
    int k=0;
   while(getline(cin,s))
   {
       if(k!=0)
       cout<<"\n";
       k++;
       a[200]={0};
      for(int i=0;i<129;i++)
        b[i]=0;

       for(int j=0,i=32;i<129;i++,j++)
        a[j]=i;
       for(int i=0;i<s.length();i++)
        b[int(s[i])]++;
       sort(a,a+97,cpm);
       for(int i=0;i<97;i++)
       if(b[a[i]])
        cout<<a[i]<<" "<<b[a[i]]<<"\n";



   }

}
