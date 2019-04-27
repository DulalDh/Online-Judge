#include<stdio.h>
main()
{
int i,sum=1,n;
scanf("%d",&n);
for(i=1;i<n;i++)
{
sum=sum*i;
}
printf("%d\n",n*sum);
}
