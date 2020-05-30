#include<iostream>
using namespace std;
string s[5005];
int main()
{
    int x,y;
    cin>>x>>y;
    for(int i=0;i<x;i++)
    {
        cin>>s[i];
    }

    for(int i=0;i<x;i++)
    {


        for(int j=0;j<y;j++)
        {

            if(i==0&&j==0&&s[i][j]=='S')
            {
                if(s[0][1]=='W'||s[1][0]=='W'){
                    cout<<"NO";
                return 0;
                }
            }
            else if(i==0&&j>0)
            {
                if(s[i][j]=='W'&&(s[i+1][j]=='S'||s[i][j+1]=='S'||s[i][j-1]=='S')){
                cout<<"NO";
                return 0;
                }
            }
            else if(j==0&&i>0)
            {
                if(s[i][j]=='W'&&(s[i+1][j]=='S'||s[i][j+1]=='S'||s[i-1][j]=='S'))
                {
                    cout<<"NO";
                    return 0;
                }
            }
            else if(s[i][j]=='W'&&(s[i+1][j]=='S'||s[i][j+1]=='S'||s[i-1][j]=='S'||s[i][j]=='S'||s[i][j-1]=='S'))
            {
                cout<<"NO";
                return 0;
            }



        }

    }
    cout<<"YES\n";
    for(int i=0;i<x;i++){
    for(int j=0;j<y;j++)
       if(s[i][j]=='.')
    {
        cout<<"D";
    }
    else
        cout<<s[i][j];
    cout<<"\n";}

}
