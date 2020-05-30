#include<iostream>
#include<string>
using namespace std;
int non_zero[10];

int a[10];
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
        x+=pw(s.length()-i-1)*a[s[i]-'a'];
    }
    return x;

}
int find_max(int x[],int z)
{
    int i;
    int m=0;
    int    mi=x[0];
    for( i=0; i<z; i++)
        if(x[i]>mi)
            m=i;
    return m;
}
int main()
{
    int ans[10]={11,11,11,11,11,11,11,11,11,11};
    int x,sum=0;

    cin>>x;
    string s[x];
    int w[x];
    for(int i=0; i<x; i++)
    {

        cin>>s[i];
        non_zero[s[i][0]-'a']++;
        w[i]=s[i].length();
        sum+=s[i].length();
    }


    int f=0;
    int j=1;
    int mm=find_max(w,x);
   // cout<<s[mm].length()<<endl;
    while(sum)
    {
        int m=find_max(w,x);

        int k=s[m].length()-w[m];
        w[m]--;

        if(f==0&&non_zero[s[m][k]-'a']==0)
        {

            ans[s[m][k]-'a']=0;
            f=1;
        }

        else if( ans[s[m][k]-'a']==11)
        {


            ans[s[m][k]-'a']=j;

j++;

        }
        sum--;

    }

    int res=0;
    for(int i=0; i<x; i++)
        res+=inv(s[i],ans);
        cout<<res;

    return 0;
}
