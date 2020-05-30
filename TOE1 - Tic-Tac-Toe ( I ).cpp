#include<bits/stdc++.h>
using namespace std;
int x,o,t;
char a[100][100];
bool is_win(string config) {

	bool rows =
		(config[0] != '.' && config[0] == config[1] && config[1] == config[2]) ||
		(config[3] != '.' && config[3] == config[4] && config[4] == config[5]) ||
		(config[6] != '.' && config[6] == config[7] && config[7] == config[8]);

	bool columns =
		(config[0] != '.' && config[0] == config[3] && config[3] == config[6]) ||
		(config[1] != '.' && config[1] == config[4] && config[4] == config[7]) ||
		(config[2] != '.' && config[2] == config[5] && config[5] == config[8]);

	bool diagonals =
		(config[0] != '.' && config[0] == config[4] && config[4] == config[8]) ||
		(config[2] != '.' && config[2] == config[4] && config[4] == config[6]);

	return rows || columns || diagonals;
}
bool finl(string s)
{
    for(int i=0;i<9;i++)
        if(s[i]=='.')
        return 0;
    return 1;
}

int main()
{

    while(true){
            string s="",a="";


        cin>>s;
        if(s=="end")
            break;


    string intial=".........";
    	queue<pair<string, bool> > qu;
		qu.push({ intial, 1 });
		string ans="invalid";
    while(qu.size())
    {

        string curr=qu.front().first;
       // cout<<curr<<"\n";
        bool x=qu.front().second;
			qu.pop();

			if (curr==s&&finl(curr))  {

				ans = "valid";
				break;
			}

if (curr==s&&is_win(curr))
{

    ans = "valid";
				break;
}
if(is_win(curr))continue;

        for(int i=0;i<9;i++)
        {


          if(curr[i]=='.')
          {
              curr[i]=(x?'X':'O');
              if(curr[i]==s[i])
                qu.push(make_pair(curr,!x));
              curr[i]='.';
          }
        }




    }
    cout<<ans<<"\n";

    }



return 0;
}
