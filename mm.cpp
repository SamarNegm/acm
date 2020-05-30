#include<iostream>
#include<algorithm>
#include<map>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int a[100001],e[100000];
string pro[1001];
string s[10000001];
string st[10000001];
bool cpm(pair<string,int>s,pair<string,int> f)
{
    if(s.second>f.second)
        return true;
    if(s.first<f.first&&s.second==f.second)
        return true;
        return false ;
}
int main()
{
    while(true){
            memset(a,0,100001);
    memset(e,0,100000);

    int i=0,cont_p=0,cont_s=0,total=0;

     map<string,int> poin;
  while (true)
  {
    getline(cin,s[total]);

      if(poin[s[total]]!=0){
       a[poin[s[total]]]++;
      }
      else
      {
          poin[s[total]]=i;
      i++;

      }
      if(s[total][0]=='1')
      {

            break;

      }
      else if(s[total][0]=='0'){
        return 0;
      }
      if(s[total][0]>='A'&&s[total][0]<='Z'){
        e[cont_p]=total;
        pro[cont_p++]=s[total];


      }
      total++;
  }
  vector<pair<string,int> >v;
  int ans=0;
   int j=0;
  // cout<<total;
  for(int i=1;i<total;i++)
  {

     if(i==e[j+1])
      {
        v.push_back(make_pair(pro[j],ans));
        ans=0;
        j++;
        continue;
      }
      int temp;
      if(a[poin[s[i]]]!=0)
      {
          temp=a[poin[s[i]]];
          for(int k=i-1;k>e[j];k--)
            if(s[k]==s[i])
                temp--;
if(temp==0)
    ++ans;
      }
        else
          ++ans;
}

  v.push_back(make_pair(pro[cont_p-1],ans));



sort(v.begin(),v.end(),cpm);
for(int i=0;i<cont_p;i++)
  //  cout<<j;
    cout<<v[i].first<<" "<<v[i].second<<endl;


    }

    return 0;
}
