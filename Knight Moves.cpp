#include<iostream>
#include<queue>
using namespace std;
int dx[]= {-2,-2,2,2,1,-1,1,-1};
int dy[]= {-1,1,-1,1,2,2,-2,-2};
pair<int,int>curr;
bool isValid(int r, int c){
	return (r >= 0 & c >= 0 && r < 8 && c < 8);
}

int main()
{
    string s1,s2;
   while(cin>>s1>>s2)
   {
       curr.first=(s1[0]-'a');
       curr.second=(s1[1]-'0')-1;
      int des_first=(s2[0]-'a');
      int des_second=(s2[1]-'0')-1;
       queue<pair<pair<int,int>,int> >q;
       q.push({curr,0});
       while(q.size())
       {

          int x=q.front().first.first;
          int y=q.front().first.second;
          int z=q.front().second;
           q.pop();
           if(x==des_first&&y==des_second)
           {
               cout<<"To get from "<<s1<<" to "<<s2<<" takes "<<z<<" knight moves.\n";
              break;
           }
           for(int i=0;i<8;i++)
           {
               if(isValid(x+dx[i],y+dy[i]))
               q.push({{x+dx[i],y+dy[i]},z+1});


           }
       }
   }
    return 0;
}
