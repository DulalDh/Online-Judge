#include<stdio.h>
main()
{
int i;
float S=1.0,n=1.0;
for(i=3;i<=39;i+=2)
{
n=n*2.0;
S=S+(i/n);
}
printf("%.2f\n",S);
}
