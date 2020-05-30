#include<bits/stdc++.h>
using namespace std;
   int n,m,a,b,k,curx,cury;
bool ok(int x,int y)
{
    if(curx+x<1||curx+x>n)
        return false;
           if(cury+y<1||cury+y>m)
        return false;
    return true;
}
int in_gredx(int x)
{
    if(x*k+curx<=n&&x*k+curx>=1)
        return x*k+curx;
    else if(x*k+curx<=n&&x*k+curx<1)
        return max(curx%k,1);
    else
        return n;

}
int in_gredy(int y)
{

    if(y*k+cury<=m&&y*k+cury>=1)
        return y*k+cury;
    else if(y*k+cury<=m&&y*k+cury<1)
        return max(cury%k,1);
    else
        return m;
}
int main()
{
 int x,y;
    cin>>n>>m;
    cin>>a>>b;
    curx=a,cury=b;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        cin>>x>>y;
        curx=in_gredx(x);
        cury=in_gredy(y);


    }
    cout<<abs(a-curx+b-cury);

    return 0;
}
