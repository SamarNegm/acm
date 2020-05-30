#include<iostream>
using namespace std;
int main()
{


    int n,j=0,i=0,k;
    cin>>n;
    while(n--)
    {
        int f=1;
        string s;
        cin>>s;
        for(int m=1;m<s.length();m++)
            if(s[m]!=s[0])
           f=0;

        if(f){
            cout<<1<<endl;
        }

        else
        {
            string temp="";temp+=s[0];

            for(i=0; i<s.length(); i++)
            {

int c=i;
                for( j=i+1,k=0; j<s.length(); j++,k++)
                {
                 //   cout<<temp<<" "<<k<<" "<<j<<endl;
                    if(k==temp.length())
                        k=0;
                        c++;

                    if(temp[k]!=s[j]){
                            temp+=s[i+1];
                        break;
                    }

                }
               if(j==s.length()){
               if(temp.length()>s.length()/2){
                cout<<s.length()<<endl;
               }
               else

                {


                    cout<<temp.length()<<endl;;


                }
break;
               }
            }
        }
        cout<<"\n";
    }
}
/*
#include<stdio.h>
#include<string.h>
#define MaxL 1000
int KMP_init(char *A) {
	int i, j;
	int P[MaxL];
	P[0] = -1, i = 1, j = -1;
	while(A[i]) {
		while(j >= 0 && A[j+1] != A[i])
			j = P[j];
		if(A[j+1] == A[i])
			++j;
		P[i] = j, ++i;
	}
	return j;
}
int main() {
	int T;
	char s[MaxL];
	scanf("%d", &T);
	while(T--) {
		scanf("%s", s);
		int l = strlen(s), t = KMP_init(s);
		if(l%(l-t-1))
			printf("%d\n", l);
		else
			printf("%d\n", l-t-1);
		if(T)	puts("");
	}
    return 0;
}*/
