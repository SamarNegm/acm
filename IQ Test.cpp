#include<iostream>
using namespace std;
int main()
{
  string x[4];
  for(int i=0;i<4;i++)
        cin>>x[i];
  for(int i=0;i<3;i++)
  {
      for(int j=0;j<3;j++)
      {
          if(x[i][j]=='#'&&x[i+1][j]=='#'&&(x[i+1][j+1]=='#'||x[i][j+1]=='#')||(x[i][j]=='.'&&x[i+1][j]=='#'&&(x[i+1][j+1]=='#'&&x[i][j+1]=='#')))
          {
              cout<<"YES\n";
              return 0;
          }
          else
             if(x[i][j]=='.'&&x[i+1][j]=='.'&&(x[i+1][j+1]=='.'||x[i][j+1]=='.')||x[i][j]=='#'&&x[i+1][j]=='.'&&(x[i+1][j+1]=='.'&&x[i][j+1]=='.'))
          {
              cout<<"YES\n";
              return 0;
          }
      }

  }
    cout<<"NO";

    return 0;
}
