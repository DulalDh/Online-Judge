#include<stdio.h>
main()
{
int count,i,j,n,a[10000];
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
for(j=2;j<=a[i]-1;j++)
{
count=0;
if(a[i]%j==0)
{
printf("%d nao eh primo\n",a[i]);
count=1;
break;
}
}
if(count==0)
printf("%d eh primo\n",a[i]);
}
}
