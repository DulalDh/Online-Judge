#include<stdio.h>
main()
{
int i,n;
float sum=0;

for(i=1; ;i++)
{
scanf("%d",&n);
if(n<0)
break;
else
sum=sum+n;
}
printf("%.2f\n",sum/(i-1));
}
