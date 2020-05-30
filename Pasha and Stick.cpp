#include<iostream>
using namespace std;
int main()
{
int x;
cin>>x;
cout<<(x/4-!(x%4))*!(x%2);
return 0;
}
