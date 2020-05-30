#include<iostream>
#include<algorithm>
int a[3];
using namespace std;
int pw(int x)
{
    int res=1;
    while(x)
    {
       res*=10;
       x--;
    }

    return res;
}
int inv(string s ,int a[])
{
    int x=0;
    for(int i=0;i<s.length();i++)
    {
        x+=pw(s.length()-i-1)*a[s[i]-'0'];
    }
    return x;

}
int main()
{
    long long x,y,i=0,s=0;
    cin>>x>>y;
    while(x)
    {
      a[i]=x%10;
      cout<<a[i]<<endl;
      x/=10;
      s++;
    }

    sort(a,a+s);
for(int l=0;l<s;l++)
    cout<<a[l]<<" ";
    while(--s)
    {
      next_permutation(a,a+s);
      for(int i=0;i<s;i++)
        cout<<a[i];
        cout<<endl;
    }



    return 0;
}
