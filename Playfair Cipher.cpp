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
    for(int i=0; i<5; i++)
    {

        for(int j=0; j<5; j++)
        {
            if(q<k.length())
            {
                m[i][j]=k[q];
                q++;
            }
            else
            {
                for(int z=curr; z<26; z++)
                {
                    if(!a[z]&&z!='j'-'a')
                    {
                        m[i][j]=(char)(z+'a');
                        a[z]=1;
                        curr=z;
                        break;
                    }
                }
            }
        }
    }
    cout<<"\n\nthe  matrix \n\n";
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
            cout<<m[i][j]<<" ";
        cout<<"\n";
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
                    if(i+1<len)
                    {
                        if(s[i]==s[i+1])
                        {
                            sec='x';
                            i++;
                        }
                        else
                        {
                            sec=s[i+1];
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
    /*
    ;;;;;;;;;;;;;;;;;;;;;;;;;;;;;;
    s=enc;
    string dec="";
    for(int j=0,i=0; i<s.length(); i++)
    {

        if(j==k.length())
        {
            j=0;
        }
        if(s[i]!=' ')
        {

            dec+=(char)((((s[i])-(k[j])+26))%26+'a');
            j++;
        }

    }
    cout<<"\nThe decryption of the result \n"<<dec<<"\n";
    */
    return 0;
}

