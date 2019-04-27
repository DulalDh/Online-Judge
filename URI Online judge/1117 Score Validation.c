#include<stdio.h>
main()
{
int i,j;
float sum=0,n=0,a[10000];
for(i=0; ;i++)
{
scanf("%f",&a[i]);
if(a[i]>=0&&a[i]<=10)
n++;
if(n==2)
break;
}
for(j=0;j<=i;j++)
{
if(a[j]<0||a[j]>10)
printf("nota invalida\n");
if(a[j]>=0&&a[j]<=10)
sum=sum+a[j];
}
printf("media = %.2f\n",sum/2.0);
}
