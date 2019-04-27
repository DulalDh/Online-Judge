#include<stdio.h>
#include<math.h>
main()
{
int a,b,c,m,m2;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
m=((a+b)+abs(a-b))/2;
m2=((m+c)+abs(m-c))/2;
printf("%d eh o maior\n",m2);
}
