#include<iostream>
using namespace std;
string search_for_pattern(string s)
{
bool f=1;
   string  ans="";
    for(int i=1;i<s.length();i++)
    {
        string temp1="";

        int j=i+1;
        for(int x=0;j<s.length();j++,x++)
        {
            if(s[j]!=s[x])
                break;
            temp1+=s[j];

            if(x==i){
                    ans=temp1;

                x=0;
            }
            if(ans!=""){
                    int k=temp1.length();
          for(;k<s.length();k++)
          {

              if(temp1[k%temp1.length()]!=s[k])
                break;
          }
          if(k==s.length())
            return ans;
          else
            ans="";
            }

        }



    }
        return ans;

}
string search_for_pattern2(string s)
{
    string ans="";
    for(int i=(s.length())/2;i>0;i--)
    {
        int j;
        for( j=0;j<i;j++)
        {
            if(s[j]!=s[s.length()-i+j])
                break;

        }
        if(j==i){

            for(int k=0;k<i;k++)
                ans+=s[k];
                return ans;
        }


    }
    return ans;

}
int main()
{
    int len,t,f=1,l,z=1;
    cin>>len>>t;

    string s,temp1="",temp2="";
    l=len-1;
    cin>>s;
    string w=search_for_pattern( s);
    string ww=search_for_pattern2( s);

      for(int i=0;i<s.length();i++)
    if(s[i]!=s[0])
    f=0;
   if(f){

 cout<<s;
 for(int i=1;i<t;i++){
    cout<<s[0];
 }

    }
   else if(w!="")
    {


        string tem="";
if(w[0]==s[s.length()-1]&&s.length()>1&&s.length()%2&&s.length()%w.length()){
    for(int i=1;i<w.length();i++)
    tem+=w[i];
w=tem;
z=0;

}
        cout<<s;
        for(int i=0;i<t-1;i++)
            cout<<w;
             if(z==0)
            cout<<s[0];
    }
    else if(ww!="")
    {

        cout<<s;
        string temp="";
        for(int i=ww.length();i<s.length()-ww.length();i++)
            temp+=s[i];
        for(int i=0;i<t-1;i++)
        cout<<temp<<ww;


    }
    else
    {


        for(int i=0;i<t;i++)
        cout<<s;
    }

    return 0;
}
