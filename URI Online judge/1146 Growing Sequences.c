#include<stdio.h>
main()
{
int i,k,j,n[10000];
for(j=1; ;j++)
{
scanf("%d",&n[j]);
if(n[j]==0)
break;
}
for(k=1;k<=j;k++)
{
for(i=1;i<=n[k];i++)
{
if(i%n[k]==0)
printf("%d\n",i);
else
printf("%d ",i);
}
}
}
