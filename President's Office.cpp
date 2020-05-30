#include<bits/stdc++.h>
using namespace std;
int a[30],ans;
char z[105][105];

int main()
{
    int b,c;
    char x;
    scanf("%d %d %c",&b,&c,&x);

    for(int i=1; i<=b; i++)
        for(int j=1; j<=c; j++)
        {
            cin>>z[i][j];
        }
    for(int i=1; i<=b; i++)
        for(int j=1; j<=c; j++)
        {
            //cout<<z[i-1][j]-'A'<<"  "<<z[i][j-1]-'A'<<"\n";
            if(z[i][j]==x&&z[i-1][j]-'A'>=0)
                a[z[i-1][j]-'A']++;

            if(z[i][j]==x&&z[i+1][j]-'A'>=0)
                a[z[i+1][j]-'A']++;
            if(z[i][j]==x&&z[i][j-1]-'A'>=0)
                a[z[i][j-1]-'A']++;
            if(z[i][j]==x&&z[i][j+1]-'A'>=0)
                a[z[i][j+1]-'A']++;
        }

    int g=x-'A';
    for(int i=0; i<=26; i++)
        if(a[i]&&i!=g)
            ans++;
    cout<<ans;


    return 0;
}
