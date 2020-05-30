#include<iostream>
#include<string>
using namespace std;
int main()
{
    int n,w1=0,w2=0;
    string t1,t2;
    cin>>n;
    cin>>t1;
    w1++;

    for(int i=1;i<n;i++)
    {

    string x;
      cin>>x;
      if(x==t1)
        w1++;
      else{
        w2++;
        t2=x;
      }
    }
 //   cout<<w1<<" "<<w2<<endl;
    cout<<(w1>w2?t1:t2);




    return 0;
}
