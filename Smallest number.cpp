#include<bits/stdc++.h>
using namespace std;
long long ans=1e18,m;
long long a[4];
char c[4];
int main()
{
    for(int i=0; i<4; i++)
        cin>>a[i];
    sort(a,a+4);
    for(int i=0; i<3; i++)
    {
        cin>>c[i];
        if(c[i]=='*')
            m++;
    }
    if(a[0]==0&&m>0)
    {
        cout<<0;
        return 0;
    }

    else if(m==2)
    {
        if(c[0]=='+')
        {
            for(int i=0; i<4; i++)
                for(int j=0; j<4; j++)
                    for(int k=0; k<4; k++)
                        for(int l=0; l<4; l++)
                        {
                            if(i!=j&&i!=k&&i!=l&&j!=k&&j!=l&&j!=k&&k!=l)
                            {
                                ans=min(ans,(a[i]+a[j])*a[k]*a[l]);
                            }

                        }
            cout<<ans<<"\n";
        }
        else if(c[1]=='+'){
        for(int i=0; i<4; i++)
                for(int j=0; j<4; j++)
                    for(int k=0; k<4; k++)
                        for(int l=0; l<4; l++)
                        {
                            if(i!=j&&i!=k&&i!=l&&j!=k&&j!=l&&j!=k&&k!=l)
                            {

                                ans=min(ans,((a[k]*a[i])+a[j])*a[l]);

                            }


                        }
                           cout<<ans<<"\n";

        }


        else
            cout<<min(a[0]*a[1]+a[2]*a[3],min(a[1]*a[0]*a[2]+a[3],a[3]*a[0]+a[1]*a[2]));

    }
    else if(m==1){
            if(c[2]=='*'){
               for(int i=0; i<4; i++)
                for(int j=0; j<4; j++)
                    for(int k=0; k<4; k++)
                        for(int l=0; l<4; l++)
                        {
                            if(i!=j&&i!=k&&i!=l&&j!=k&&j!=l&&j!=k&&k!=l)
                            {

                                ans=min(ans,((a[k]+a[i])+a[j])*a[l]);

                            }


                        }
                        cout<<ans;
            }
            else

        cout<<a[0]*a[1]+a[2]+a[3];
    }
    else if(m==0)
        cout<<a[0]+a[1]+a[2]+a[3];
    else
        cout<<a[0]*a[1]*a[2]*a[3];

    return 0;
}
