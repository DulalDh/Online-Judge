#include<stdio.h>
main()
{
double fuel;
int time,speet;
scanf("%d",&time);
scanf("%d",&speet);
fuel=(time*speet)/12.0;
printf("%.3f\n",fuel);
}
