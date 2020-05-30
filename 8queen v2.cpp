#include<bits/stdc++.h>
using namespace std;
int x[100];
int y[100];
int d1[100],d2[100];

bool check(int grid[100][100],int r,int c)
{
    if(x[r]==1)
        return 0;
    else if(y[c]==1)
        return 0;
    else if(d1[r-c+8]==1)
    return 0;
    else if(d2[r+c]==1)
        return 0;
    return true;


}



vector<pair<int,int> >attack;
bool f=0;
int grid[100][100];
int main()
{
    int p,c=0;
    cout<<"IF THERE IS A QEEN ENTER 1 ELSE ENTER 0\n";
    for(int i=0;i<8;i++)
        for(int j=0;j<8;j++){
        cin>>p;
        grid[i][j]=p;
        if(p==1)
        {
            c++;

            if(!check(grid,i,j))
            {
             f=1;
             attack.push_back(make_pair(i,j));
            }
              x[i]=1;
            y[j]=1;
            d1[i-j+8]=1;
            d2[i+j]=1;
        }
        }

    if(f==1||c!=8){
            cout<<" not 8 queen \n";
        for(int i=0;i<attack.size();i++ )
            cout<<attack[i].first<<" "<<attack[i].second<<"\n";
    }
    else
        cout<<"yes";


    return 0;
}
