#include<stdio.h>
main()
{
int i,j,n1,n2;
scanf("%d",&n1);
scanf("%d",&n2);
for(i=1;i<=n2;i++)
{

if(i%n1==0)
printf("%d\n",i);
else
printf("%d ",i);
}
}
