#include<stdio.h>
main()
{
int n=0,k,i,j,a[10000],b[10000],sum[10000],counter[10000];
int count[100][100];
for(i=0; ;i++)
{
n=0;
sum[i]=0;
scanf("%d",&a[i]);
scanf("%d",&b[i]);
if(a[i]>b[i]&&a[i]!=0&&b[i]!=0)
{
for(j=b[i];j<=a[i];j++)
{
count[i][n]=j;
sum[i]=sum[i]+j;
n++;
counter[i]=n;
}
}
if(a[i]<b[i]&&a[i]!=0&&b[i]!=0)
{
for(j=a[i];j<=b[i];j++)
{
count[i][n]=j;
sum[i]=sum[i]+j;
n++;
counter[i]=n;
}
}
if(a[i]==0||b[i]==0||a[i]<0||b[i]<0)
break;
}
for(k=0;k<=i-1;k++)
{
for(j=0;j<=counter[k]-1;j++)
printf("%d ",count[k][j]);
printf("Sum=%d\n",sum[k]);
}
}
