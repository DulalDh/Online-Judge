#include<stdio.h>
main()
{
int A,i,count=0,N[100000];
scanf("%d",&A);
for(i=0;i<A;i++)
{
scanf("%d",&N[i]);

if(N[i]>=10&&N[i]<=20)
count++;
}
printf("%d in\n%d out\n",count,A-count);
}
