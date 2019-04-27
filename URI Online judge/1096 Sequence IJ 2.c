#include<stdio.h>
main()
{
int i,count=7,count1=1,j;
for(i=1;i<=5;i++)
{
for(j=1;j<=3;j++)
{
printf("I=%d J=%d\n",count1,count);
count--;
}
count1+=2;
count=7;
}
}
