#include<stdio.h>
main()
{
int N,A[10000],i,tem1=0,tem2=0,tem3=0,total;
float ir1,ir2,ir3;
char a[10000];
scanf("%d",&N);
for(i=0;i<N;i++)
{
scanf("%d",&A[i]);
scanf(" %c",&a[i]);
}

for(i=0;i<N;i++)
{

if(a[i]=='C')
tem1=tem1+A[i];
if(a[i]=='R')
tem2=tem2+A[i];
if(a[i]=='S')
tem3=tem3+A[i];
}
total=tem1+tem2+tem3;
ir1=(100.0/total)*tem1;
ir2=(100.0/total)*tem2;
ir3=(100.0/total)*tem3;
printf("Total: %d cobaias\nTotal de coelhos: %d\nTotal de ratos: %d\nTotal de sapos: %d\nPercentual de coelhos: %.2f %%\nPercentual de ratos: %.2f %%\nPercentual de sapos: %.2f %%\n",total,tem1,tem2,tem3,ir1,ir2,ir3);
}
