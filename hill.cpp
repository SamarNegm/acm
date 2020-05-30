#include<bits\stdc++.h>
using namespace std;
int main()
{
    int n=2,m=2;
cout<<"Enter 2*2 key matrix\n";

    int mk[n][m];
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            cin>>mk[i][j];
        }

    string t,enc="";
    cin>>t;
    for(int i=0; i<t.length(); i+=m)
    {
        int a[m];
        for(int j=i,z=0; z<m;z++, j++)
        {
            a[z]=t[j]-'a';
        }
        for(int j=0; j<m; j++)
        {
            int           x=0;
            for(int q=j,z=0; z<n;z++, q++)
            {
                x+=((mk[j][z]*a[z]));

            }
            enc+=(char)(x%26+'a');
        }

    }
    cout<<enc<<"\n\n";;
;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    t=enc;

    int inv=mk[0][0]*mk[1][1]-(mk[1][0]*mk[0][1]);
    int i=1;
    int tmp=mk[0][0];
    while(1)
    {
        if((inv*i)%26==1)
        {
            break;
        }
        i++;
    }
    mk[0][0]=(i*mk[1][1]+26)%26;
    mk[1][1]=(i*tmp+26)%26;
    mk[0][1]=(i*-mk[0][1]+26)%26;
    mk[1][0]=(i*-mk[1][0]+26)%26;
    cout<<" the decryption key matrix\n";
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++)
        cout<<mk[i][j]<<"  ";
        cout<<"\n";
    }
    string dec="";
      for(int i=0; i<t.length(); i+=m)
    {
        int a[m];
        for(int j=i,z=0; z<m;z++, j++)
        {
            a[z]=t[j]-'a';
        }
        for(int j=0; j<m; j++)
        {
            int           x=0;
            for(int q=j,z=0; z<n;z++, q++)
            {
                x+=((mk[j][z]*a[z]));

            }
            dec+=(char)(x%26+'a');
        }

    }
cout<<" the decryption of "<<enc<<" is "<<dec<<"\n";
    return 0;
}
/*
2 2
3 3
2 5
hats
*/
