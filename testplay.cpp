#include<iostream>
using namespace std;
int a[30];
char m[6][6];

int main()
{
    //  KXJEY UREBE ZWEHE WRYTU HEYFSKREHE GOYFI WTTTU OLKSY CAJPOBOTEI ZONTX BYBNT GONEY CUZWRGDSON SXBOU YWRHE BAAHY USEDQ

    string ss,s,k,enc="";
    cout<<"Enter the palin text\n";
    getline(cin,s);
    string t="";
    for(int i=0; i<s.length(); i++)
        if(s[i]==' ')
            continue;
        else
            t+=tolower(s[i]);
    // cout<<t;

    s=t;
    t="";
    cout<<"Enter the key\n";
    getline(cin,k);
    for(int i=0; i<k.length(); i++)
        if(k[i]==' ')
            continue;
        else
            t+=tolower(k[i]);


    k=t;
    t="";
    for(int i=0; i<k.length(); i++)
    {
        if(!a[k[i]-'a'])
        {
            t+=k[i];
            a[k[i]-'a']=1;
        }
    }
    k=t;
    int q=0,curr=0;
    for(int i=0; i<s.length(); i++)
    {
        if(!a[s[i]-'a'])
        {
            t+=s[i];
            a[s[i]-'a']=1;
        }


    }
    for(int i=0; i<26; i++)
    {
        if(!a[i])
        {
            a[i]=1;
            if((char)(i+'a')=='j')continue;
            t+=(char)(i+'a');
        }
    }
    int u=0;
    cout<<"\n\nthe  matrix \n\n";
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {

            m[i][j]=t[u++];
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    int len=s.length();
    for(int i=0; i<len; )
    {

        if(s[i]=='j')
            s[i]='i';

        for(int j=0; j<5; j++)
            for(int k=0; k<5; k++)
            {
                if(m[j][k]==s[i])
                {
                    char sec,fr;
                    int f=0;
                    fr=s[i];
                    cout<<fr;
                    if(i+1<len)
                    {
                        if(s[i]==s[i+1])
                        {
                            sec='x';
                            cout<<sec<<"\n";
                            i++;
                        }
                        else
                        {
                            sec=s[i+1];
                            cout<<sec<<"\n";
                            i+=2;
                        }
                        for(int v=0; v<5; v++ )
                            if(m[j][v]==sec)
                            {
                                f=1;
                                enc+=m[j][(k+1)%5];
                                enc+=m[j][(v+1)%5];
                                break;
                            }
                        for(int v=0; v<5; v++ )
                            if(m[v][k]==sec)
                            {
                                enc+=m[(j+1)%5][k];
                                enc+=m[(v+1)%5][k];
                                f=1;
                                break;
                            }
                        if(f==0)
                        {
                            for(int q=0; q<5; q++)
                                for(int r=0; r<5; r++)
                                {
                                    if(m[q][r]==sec)
                                    {
                                        enc+=m[j][r];
                                        enc+=m[q][k];
                                        break;
                                    }
                                }

                        }
                    }
                    else
                    {
                        enc+=m[j][(k+3)%5];
                        if(k!=4)
                            enc+=m[4][k];
                        else
                            enc+=m[4][4];
                        i++;
                    }

                }
            }
    }

    cout<<"\nn"<<enc<<"\n";

    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    s=enc;
    string dec="";

    cout<<"\nThe decryption of the result \n"<<dec<<"\n";

    return 0;
}


