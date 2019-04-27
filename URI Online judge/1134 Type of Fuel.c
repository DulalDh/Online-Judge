#include<stdio.h>
main()
{
int j,x,n1=0,n2=0,n3=0;

for(j=0; ;j++)
{
scanf("%d",&x);
if(x==1)
n1++;
if(x==2)
n2++;
if(x==3)
n3++;
if(x==4)
break;
}
printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",n1,n2,n3);
}
