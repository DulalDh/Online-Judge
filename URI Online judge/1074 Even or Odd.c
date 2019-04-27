#include<stdio.h>
#include<math.h>
int main()
{
int a,i,n[100000];
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d",&n[i]);
}

for(i=0;i<a;i++)
{
if(n[i]>0)
{
if(n[i]%2==0)
printf("EVEN POSITIVE\n");
else
printf("ODD POSITIVE\n");
}
if(n[i]<0)
{
if(n[i]%2!=0)
printf("ODD NEGATIVE\n");
else
printf("EVEN NEGATIVE\n");
}
if(n[i]==0)
printf("NULL\n");
}
}
