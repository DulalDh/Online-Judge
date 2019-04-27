#include<stdio.h>
main()
{
int x[10000],y[10000],i,j;
for(i=0; ;i++)
{
scanf("%d",&x[i]);
scanf("%d",&y[i]);
if(x[i]==0||y[i]==0)
break;
}
for(j=0;j<=i;j++)
{
if(x[j]>0&&y[j]>0)
printf("primeiro\n");
if(x[j]>0&&y[j]<0)
printf("quarto\n");
if(x[j]<0&&y[j]>0)
printf("segundo\n");
if(x[j]<0&&y[j]<0)
printf("terceiro\n");
}
}
