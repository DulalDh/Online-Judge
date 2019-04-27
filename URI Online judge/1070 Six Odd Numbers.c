#include<stdio.h>
main()
{
int a,i,b;
scanf("%d",&a);
if(a%2==0)
{
b=a+1;
for(i=1;i<=6;i++)
{

printf("%d\n",b);
b+=2;
}
}

if(a%2!=0)
{
b=a+2;
for(i=1;i<=6;i++)
{

printf("%d\n",b);
b+=2;
}
}
}
