#include<iostream>
using namespace std;
string s[100000],b2[100000];
int main()
{
    int x,f=0,p;
    cin>>x;
    char c;

    for(int i=0;i<x;i++)
    {

        cin>>s[i];
         if(s[i][0]=='O'&&s[i][1]=='O'||s[i][3]=='O'&&s[i][4]=='O')
            f=1;


    }
        cout<<(f?"YES\n":"NO\n");
    if(f){
    int i=0;

    for( i=0;i<x;i++)
    {
           if(s[i][0]=='O'&&s[i][1]=='O')
        {
          cout<<"++|"<<s[i][3]<<s[i][4]<<endl;
          break;
        }
         if(s[i][3]=='O'&&s[i][4]=='O')
        {
            cout<<s[i][0]<<s[i][1]<<"|++\n";
            break;
        }
        cout<<s[i]<<endl;
    }

for(int j=i+1;j<x;j++)
cout<<s[j]<<endl;
    }
    return 0;
}
