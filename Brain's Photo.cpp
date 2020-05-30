#include<iostream>
using namespace std;
int p[6];
int main()
{
    int x,y;
  cin>>x>>y;
  for(int i=0;i<x*y;i++)
  {
      char b;
      cin>>b;
      if(b=='C')
        p[0]++;
      else if(b=='M')
        p[1]++;
      else if(b=='Y')
        p[2]++;
      else if(b=='W')
        p[3]++;
      else if(b=='G')
        p[4]++;
      else
        p[5]++;
  }
  if(p[0]==0&&p[1]==0&&p[2]==0)
    cout<<"#Black&White";
  else
    cout<<"#Color";
}
