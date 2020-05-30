#include<iostream>
#include<set>

using namespace std;
string non_r[100000]={"0"};
string p[101]={"0"};
int t[100000];
int main()
{
int i=0,pp=0;
    while(true)
    {
        string x[i];
        getline(cin,x[i]);
        if(x[i]=="0"&&x[i-1]=="1")
            return 0;
        else
        {
            for(int j=0;j<100000;j++)
                if(x[i]==non_r[j]){
                        t[j]++;
                continue;
                }
            else if(non_r[j]=="0"&&x[i][0]<='a'&&x[i][0]>='z'){
                non_r[j]=x[i];
            t[j]++;
            }
            else{
                p[pp]=x[i];
                pp++;
            }

        }
        i++;
    }
//    for(int )





    return 0;
}
