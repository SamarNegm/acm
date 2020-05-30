#include<iostream>
using namespace std;
int a[2000000];
int aa[100005];
int main()
{

    string s;
    cin>>s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int m;
        cin>>m;
        aa[m]++;
    }

    for(int i=0; i<=s.length()/2; i++)
    {
        if(aa[i]%2){
        int start=i;
        int ed=s.length()-i+1;
        while(start<ed)
        {
            if(a[ed]==0)
            {
                a[start]=ed;
                a[ed]=start;

            }
            else
            {
                int tt=a[start];
                a[start]=a[ed];
                a[ed]=tt;}
            start++;
            ed--;

        }
        }
    }

    for(int i=1; i<=s.length(); i++)
        if(a[i]==0)
            cout<<s[i-1];
        else
            cout<<s[a[i]-1];
    return 0;
}
