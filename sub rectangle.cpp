#include<iostream>
using namespace std;
int sum,x;
int dp[1000][1000];
int main()
{
    for(int i=1;i<=4;i++)
    {
       sum=0;
       for(int j=1;j<=4;j++)
       {
           cin>>x;
           sum+=x;
           dp[i][j]=sum+dp[i-1][j];


       }
    }

cout<<"\n\n\n";
      for(int i=1;i<=4;i++)
    {
       sum=0;
       for(int j=1;j<=4;j++)
       {
           cout<<dp[i][j]<<" ";


       }
       cout<<"\n";
    }

    return 0;
}
