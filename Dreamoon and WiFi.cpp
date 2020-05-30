#include<bits/stdc++.h>
using namespace std;
double x,y,a,b;
int c;
int main()
{

    string s, s2;
    cin>>s>>s2;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='-')
            y++;
        else
            x++;
        if(s2[i]=='-')
            b++;
        else if (s2[i]=='+')
            a++;
        else
            c++;
    }
   double q=(1<<c);
    if(a==x&&b==y)
      cout<<fixed<<setprecision(12)<<(double)1;
      else if(a>x||b>y)
            cout<<fixed<<setprecision(12)<<(double)0;

    else
     cout<<fixed<<setprecision(12)<<((((x-a)/2+(y-b)/2))*c/(1<<(c)))<<" "<<(1<<c)<<" "<<c;


    return 0;
}
