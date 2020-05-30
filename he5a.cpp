
#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define f first
#define s second
#define ll long long

int main()
{
    int n;
    scanf("%d",&n);
   if(n%2)
    cout<<-1;
    else{
        for(int i=1,j=2; i<=n; i+=2,j+=2){
      printf("%d %d ",j,i);
        }


    }



    return 0;

}
//يلا مش مهم^^
