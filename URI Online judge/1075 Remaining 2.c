#include<stdio.h>
main()
{
int A,i;
scanf("%d",&A);
for(i=1;i<10000;i++)
{
if(i%A==2)
printf("%d\n",i);
}
}
