#include<iostream>
#include<stdio.h>
#include<cmath>
using namespace std;

int main()
{
    int k=3;
        for(int j=0;j<25;j++){
            if(k&(1ll<<j)){

            cout<<1;
            }
            else
                cout<<0;
        }
}
