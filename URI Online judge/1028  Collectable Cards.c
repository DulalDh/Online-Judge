#include<bits/stdc++.h>
using namespace std;
int main()
{
int a,b,r,x,y,t;
cin>>t;
while(t--)
{
scanf("%d%d",&a,&b);
x=a;
y=b;
while(y!=0)
{
    r=x%y;
    x=y;
    y=r;
}
printf("%d\n",x);
}
return 0;
}