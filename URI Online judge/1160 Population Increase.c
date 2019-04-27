#include<stdio.h>
main()
{
int i,t;
int c;
int a,b;
double g1,g2;
scanf("%d",&t);
for(i=1;i<=t;i++)
{
     c=0;
scanf("%d%d%lf%lf",&a,&b,&g1,&g2);

while(a<=b)
{
            a *= (g1 / 100.0) + 1.0;
            b *= (g2 / 100.0) + 1.0;
c++;
if(c>100)
{
printf("Mais de 1 seculo.\n");
break;
}}
if(c<=100)
printf("%d anos.\n",c);
}
}
