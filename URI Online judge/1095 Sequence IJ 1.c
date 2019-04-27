#include<stdio.h>
main()
{
int i,count=60,count1=1;
for(i=1;i<=13;i++)
{
printf("I=%d J=%d\n",count1,count);
count=count-5;
count1=count1+3;
}
}
