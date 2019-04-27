#include<stdio.h>
main()
{
int X,Y;
scanf("%d",&X);
scanf("%d",&Y);
switch(X)
{
case 1:
printf("Total: R$ %.2f\n",4.00*Y);
break;

case 2:
printf("Total: R$ %.2f\n",4.50*Y);
break;

case 3:
printf("Total: R$ %.2f\n",5.00*Y);
break;

case 4:
printf("Total: R$ %.2f\n",2.00*Y);
break;

default:
printf("Total: R$ %.2f\n",1.50*Y);
break;
}
}
