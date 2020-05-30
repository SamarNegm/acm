#include<bits/stdc++.h>
using namespace std;


int main()
{
    string s1;
    cin>>s1;
    string s2="abcdefghijklmnopqrstuvwxyz";
    int cont=0,j=0;
    for(int i=0;i<s1.size();i++){
        if(s1[i]<=s2[j]){
                s1[i]=s2[j];
            cont++;
            j++;
        if(cont==26)
            break;
        }
    }
    if(cont==26)
        cout<<s1<<endl;
    else
        cout<<"-1"<<endl;




    return 0;
}
