#include<bits/stdc++.h>
using namespace std;
int alloc[10000][10000];
int mat[10000][10000];
int need[10000][10000];
int finsh[100000];
int av[100000];
int n,m;
int main()
{
    cout<<"Enter n & m\n";
    cin>>n>>m;
    cout<<"Enter the matrix\n";
    for(int i=0; i<n; i++)
    {

        for(int j=0; j<m; j++)
            cin>>mat[i][j];
    }
    cout<<"Enter allocation matrix\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
            cin>>alloc[i][j];
    }
    cout<<"The needed matrix\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++){
            need[i][j]=mat[i][j]-alloc[i][j];
            cout<<need[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"Enter avilable\n";
    for(int i=0; i<n; i++)
        cin>>av[i];
    int   k=0;
    while(k<n)
    {
        bool flg=0;
        int j;
        for(int i=0; i<n; i++)
        {
            if(finsh[i])
                continue;
            for( j=0; j<m; j++)
            {
                cout<<av[j]<<"  "<<need[i][j]<<"\n";
                if(av[j]<need[i][j])
                {

                    break;
                }
            }
            cout<<"  \nend of iterration\n\n";
            if(j==m)
            {
                finsh[i]=1;
                k++;
                flg=1;
                //update av
                cout<<"THE UPDATED AVILABLE\n";
                for(int j=0; j<m; j++)
                {
                    av[j]+=alloc[i][j];
                    cout<<av[j]<<"  ";
                }
                cout<<"\n\n";

            }
        }
        if(flg==0)
        {
            cout<<"Not save\n";
            break;
        }


    }
    if(n==k)
        cout<<"Save\n";




    return 0;
}/*
7 5 3
3 2 2
9 0 2

0 1 0
2 0 0
3 0 2

1 0 3
0 1 2
1 2 0


1 0 3
0 1 2
1 2 0
*/
