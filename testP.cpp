#include<bits/stdc++.h>
using namespace std;

int main(){

    int idx=3;
    char name[] ="out0000000000000.txt";
    for(int i=0; i<4; ++i){
        if(name[idx]=='9')
            ++idx;
        freopen(name, "w", stdout);
        ++name[idx];
        int n=rand()%999999+1;
        int x=rand()%n+1;
        string s="";
        for(int i=0;i<n;i++)
        {
            if(i==x)
                s+="*";
            s+='a'+rand()%26;
        }
cout<<s;

}






    return 0;
}
