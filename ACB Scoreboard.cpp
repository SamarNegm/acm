#include<iostream>
#include<vector>
#include<set>
int tf0[100000];

using namespace std;
int main()
{
    int t,c,p,s;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>c>>p>>s;
        int k=0,tt[s],pid[s],cid[s],tf,sp[s],tf1[c][p]={0},so[10000]={0},tf0[c][p]={0};
         vector<pair<int , int > > v(s);
         set<int >scid;
         set<int>::iterator iter1,iter2;
         set<int>spid;

        for(int j=0;j<s;j++)
        {
            cin>>tt[j]>>cid[j]>>pid[j]>>tf;
            if(tf==1)
            {

        scid.insert(cid[j]);
        spid.insert(pid[j]);

            }
            if(tf==0)
                tf0[cid[j]][pid[j]]++;
                cout<<tf0[cid[j]][pid[j]]<<endl;;
             if(tf1[cid[j]][pid[j]]==0||tf1[cid[j]][pid[j]]>tt[j]||tf1[cid[j]][pid[j]]==0)
                tf1[cid[j]][pid[j]]=tt[j];
                cout<<tf1[cid[j]][pid[j]]<<endl;

        }
        iter1=scid.begin();
        iter2=spid.begin();
        for(int b=0;b<c;b++,*++iter1,*++iter2)
            cout<<*iter1<<" "<<*iter2<<" \n";
            cout<<tf0[*iter1][*iter2]*20+ tf1[*iter1][*iter2]<<" ";

    }



    return 0;
}
