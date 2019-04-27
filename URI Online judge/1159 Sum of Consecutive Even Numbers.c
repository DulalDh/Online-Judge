#include<stdio.h>
main()
{
int i,j,n2=0,k,sum=0,n[10000];
for(i=0; ;i++)
{
scanf("%d",&n[i]);
if(n[i]==0)
break;
}
for(j=0;j<i;j++)
{
for(k=n[j]; ;k++)
{
if(k%2==0)
{
sum=sum+k;
n2++;
}
if(n2==5)
break;
}
printf("%d\n",sum);
sum=0;
n2=0;
}
}
