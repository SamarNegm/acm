#include<iostream>
#include<string>
using namespace std;
int main()
{
    int x;
    cin>>x;
    int b=x;
    char ans[x];
    string y;
    cin>>y;
    int mid;
    if(x%2==0)
    {
        mid=x/2-1;
        ans[x-1]=y[x-1];
        x--;
    }
    else{
        mid=x/2;
    }
    ans[mid]=y[0];
    for(int i=1,j=1; i<x;i+=2,j++)
    {
        if(b%2==0){
        ans[mid+j]=y[i];
        //cout<<i<<" "<<y[i]<<endl;
        ans[mid-j]=y[i+1];
        }
        else
        {
                ans[mid-j]=y[i];
      //  cout<<i<<" "<<y[i]<<endl;
        ans[mid+j]=y[i+1];
        }
    }
    if(b%2==0)
        x++;
    for(int i=0; i<x; i++)
        cout<<ans[i];

}
