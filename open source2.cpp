#include<iostream>
#include<map>
#include<vector>
using namespace std;
int a[100001],e[100000];
string pro[1001];
string s[10000001];
string st[10000001];
int main()
{
    int i=0,cont_p=0,cont_s=0,zz=0;

     vector<pair<string,string> >sp;
  while (true)
  {
      getline(cin,s[zz]);
      if(s[zz][0]=='1')
      {
          getline(cin,s[zz]);
          if(s[zz][0]=='0')
            break;

      }
      if(s[zz][0]>='A'&&s[zz][0]<='Z'){
        e[cont_p]=zz;
        pro[cont_p++]=s[zz];

      }

      else{
          st[cont_s++]=s[zz];

      }
      zz++;
  }

cout<<cont_p<<" "<<e[cont_p-1]<<endl;
for(int i=0;i<cont_p;i++)
    for(int j=e[i]+1;j<e[i+1];j++)
        sp.push_back(make_pair(pro[i],s[j]));

    for(int i=0;i<cont_s;i++)
        cout<<sp[i].first<<" "<<sp[i].second<<endl;



    return 0;
}
