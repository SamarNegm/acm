#include<iostream>
#include<string>
using namespace std;
int main()
{

   string s;
   int    x;
   cin>>x;
   cin>>s;
   string ans="";

  //  cout<<"hi"<<endl;

    while(x){
       if(x%2!=0){
      ans+=s[x/2];
        for(int i=x/2;i<x;i++)
            s[i]=s[i+1];
        //    cout<<s<<"  " <<s.length()<<endl;

   }
   else
   {
       ans+=s[x/2-1];
       for(int i=x/2-1;i<x;i++)
            s[i]=s[i+1];
        //    cout<<s<<"  " <<s.length()<<endl;

   }
   x--;
    }
   cout<<ans;






    return 0;
}
