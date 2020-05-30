#include<stdio.h>
using namespace std;
int a[4127],b[4127];
int main()
{
    int x,f=0,r=0;
    scanf("%d",&x);
    scanf("%d%d",&a[0],&b[0]);
     if(a[0]!=b[0])
            {
                printf("rated");
                return 0;
            }
    for(int i=1;i<x;i++)
    {
        scanf("%d%d",&a[i],&b[i]);

            if(a[i]!=b[i])
            {
            r=1;
            }
          for(int j=i-1;j>=0;j--)
          {
              //printf("hi\n");
              if(a[i]>a[j])
                f=1;
          }

    }
    if(r==1)
        printf("rated");

    else if(f==0&&r==0)
    printf("maybe");
      else
        printf("unrated");
}
