#include<stdio.h>
main()
{
int i,a[10000],b[10000],j;
for(i=0; ;i++)
{
scanf("%d",&a[i]);
scanf("%d",&b[i]);
if(a[i]==b[i])
break;
}
for(j=0;j<i;j++)
{
if(a[j]>b[j])
printf("Decrescente\n");
if(a[j]<b[j])
printf("Crescente\n");
}
}
