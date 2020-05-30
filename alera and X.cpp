#include<iostream>
using namespace std;
int main()
{
    int x;
    cin>>x;
    for(int i=1;i<=x;i++)
    {
        string s;
        char d,n;
        cin>>s;
        for(int j=1;j<=x;j++){
        if(j==1&&i==1){
             d=s[0];
            n=s[1];}
            if(n==d)
            {
                cout<<"NO";
            return 0;
            }
        else if((j==i||x-j==i-1)&&s[j-1]!=d)
        {
            cout<<"NO";
            return 0;
        }
        else if(s[j-1]!=n&&(j!=i&&x-j!=i-1))
        {
             cout<<"NO";
            return 0;
        }


    }
    }
    cout<<"YES";





    return 0;
}
