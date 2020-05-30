#include<iostream>
#include<vector>
using namespace std;



int main()
{

  int x;
      cin>>x;
      int a[x];
      for(int i=0;i<x;i++)
        cin>>a[i];
      int ans=0;
      for(int c=0;c<x;c++)
      {
          int cn=1;
          for(int j=c+1;j<x&&a[j]<=a[j-1];j++)
            cn++;
          for(int j=c-1;j>=0&&a[j]<=a[j+1];j--)
            cn++;
          ans=max(cn,ans);
      }
      cout<<ans;




    return 0;
}
