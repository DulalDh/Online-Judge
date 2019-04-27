#include<stdio.h>
main()
{
int j,x;
scanf("%d",&x);
for(j=1;j<=x*4;j++)
{
if(j%4==0)
{
printf("PUM\n");
}
else
printf("%d ",j);
}}
