#include<stdio.h>
main()
{
int i,st1=0,nd2=1,sum=0,n;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
sum=sum+st1;
st1=nd2;
nd2=sum;

if(i==n)
printf("%d\n",sum);
else
printf("%d ",sum);
}
}
