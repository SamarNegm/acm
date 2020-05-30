#include<bits/stdc++.h>
using namespace std;

bool prime(int num){
    if(num==2 || num==3 || num==5 || num==7 || num==11 || num==13 || num==17 || num==19 || num==23 || num==29 || num==31)
        return true;

    /*for(int i=2; i*i<=num; ++i){
        if(num%i==0)
            return false;
    }*/

    return false;
}

int arr[17], vis[17], j=2, n;
bool first=true;
void circle(int l, int n){

    if( j==n+1 ){
        if( prime(arr[j-1]+1) ){
            if(first)
                first=false;
            else
                puts("");

            for(int i=1; i<=n; ++i){
                if(i!=n)
                    printf("%d ", arr[i]);
                else
                    printf("%d", arr[i]);

            }

        }

        return;
    }

    for(int i=2; i<=n; ++i){
        if(!vis[i]){
            if( prime(i+l) ){
                vis[i]=1;
                arr[j++]=i;

                circle(i, n);

                vis[i]=0;
                arr[--j]=0;
            }
        }
    }
}


int main(){
    int line=1;
    bool fs=true;
    while(cin>>n){
        arr[1]=1; vis[1]=1; first=true; j=2;

        if(fs)
            fs=false;
        else
            printf("\n");

        printf("Case %d:\n", line++);
        circle(1, n);
         printf("\n");
    }



    return 0;
}
