#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b=0,c=0,ans=0;
    string s;
scanf("%d",&a);
for(int j=0;j<a;j++){
        cin>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='o'&&(i==0||i==s.length()-1&&(j==0||j==a-1)))
        ans+=2;
else if(s[i]=='o'&&(i==0||i==s.length()-1))
    ans+=3;
else if(s[i]=='o')
    ans+=4;
    }


}
cout<<(ans%2?"NO":"YES");





    return 0;
}



/*           يلا مش مهم
*/
