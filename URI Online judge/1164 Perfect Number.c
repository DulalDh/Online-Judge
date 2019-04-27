#include<stdio.h>
main()
{
int sum=0,i,j,n,a[10000];
scanf("%dq",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=1;j<=a[i]/2;j++)
{
sum=sum+j;
if(a[i]==sum)
{
printf("%d eh perfeito\n",a[i]);
break;
}
}
if(a[i]!=sum)
printf("%d nao eh perfeito\n",a[i]);
sum=0;
}
}
