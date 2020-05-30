#include<bits/stdc++.h>
using namespace std;
int di[] = {0, -1, 0, 1};
int dj[] = {-1, 0, 1, 0};
char s[100][100];
int n,m;
bool inGrid(int xi,int yi)
{

    return(xi>=0&&yi>=0&&xi<n&&yi<m);

}


bool vis[101][101]={0};
bool f;
void dfs(int i,int j,int lastI,int lastJ)
{
    if(s[i][j]!=s[lastI][lastJ])
        return;
    if(vis[i][j])

    {
//cout<<i<<" "<<j<<"\n";
        printf("Yes\n");
        exit(0);


    }
    vis[i][j] = 1;
   // cout<<i<<" "<<j<<" "<<lastI<<" "<<lastJ<<"\n";

    for(int k=0; k<4; k++)
    {
        int newi=i+di[k];
        int newj=j+dj[k];
        if(inGrid(newi,newj))
        {

            if(newi!=lastI||newj!=lastJ){
             //  cout<<"newi "<<newi<<"newj "<<newj<<"\n";
                dfs(newi,newj,i,j);
            }

        }
    }
    vis[i][j]=0;


}
int main()
{
    string k="insert into drivers values(";
    for(int i=1;i<5;i++)
    {

        cout<<k<<(100+i)
        <<","<<"'"<<"user"<<i<< "',"<<"'owner"<<i<<"',"<<010<<i<<rand()%10<<rand()%10<<rand()%10<<","
        <<rand()%60<<"'"<<20<<rand()%10<<rand()%10<<"/"<<0<<rand()%13<<"/"<<","<<rand()%30<<","<<(char)(rand()%26+'a')<<
        (char)(rand()%26+'a')<<(char)(rand()%26+'a')
        <<rand()%10<<rand()%10<<rand()%10<<rand()%10<<","<<rand()%5000<<","<<rand()%5+1<<","
        <<rand()%2<<")"<<"\n";


    }

    string st;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        for(int j=0;j<m;j++)
        cin>>s[i][j];

    }
    for(int i=0; i<n; i++)
        for(int j=0; j<m; j++)
        {
            memset(vis,0,101);
            dfs(i,j,i,j);
            cout<<"\n";

        }
    cout<<"No";


    return 0;
}
