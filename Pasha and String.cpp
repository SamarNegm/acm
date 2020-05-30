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
    for(int i=0; i<n; i++)
    {
        int m;
        cin>>m;
           int start=m-1;
            int ed=s.length()-m;
            aa[start]++;
            aa[ed]--;


    }
int d=0;
    for(int i=0; i<s.length()/2; i++)
    {
        d+=aa[i];
        if((d)%2==1)
        {
            swap(s[i],s[s.length()-i-1]);
        }
    }

    cout<<s;
    return 0;
}
