#include<iostream>
#include<vector>
using namespace std;
#define ll long long
long long vst [ 200005 ],ans,q[30005],x;
vector<long long>vp,mp;
void seiv()
{

    for( long long i = 2,k=0 ; i <=3005; ++i )
    {
        if( vst[ i ] )
        {
            continue ;
        }
        vp.push_back(i);
        for( ll j = 1LL * i *i; j <=3005; j += i )
            vst[ j ] ++;
    }
}
bool is_p(int a)
{
    int c=0;
    for(int i=0; vp[i]<a; i++)
    {
        if(a%vp[i]==0)
        c++;
        if(c>2)
            return false;

    }
    return c==2;
}
int main()
{
    seiv();
    int i=0,j=1,l=0;
    cin>>x;

    for(int i=2; i<=x; i++)
        if(is_p(i))
        {
            ans++;

        }
    cout<<ans;




    return 0;
}
