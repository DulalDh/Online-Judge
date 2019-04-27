#include<stdio.h>
main()
{
float a,b,c,d,e,f,sum;
int i,count=0;
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);
scanf("%f",&d);
scanf("%f",&e);
scanf("%f",&f);
for(i=1;i<=6;i++)
{
if(a>0)
{
count++;
sum=a;
a=0;
}
else if(b>0)
{
count++;
sum=sum+b;
b=0;
}

else if(c>0)
{
count++;
sum=sum+c;
c=0;
}

else if(d>0)
{
count++;
sum=sum+d;
d=0;
}

else if(e>0)
{
count++;
sum=sum+e;
e=0;
}
else if(f>0)
{
count++;
sum=sum+f;
f=0;
}
}
printf("%d valores positivos\n%.1f\n",count,sum/count);
}
