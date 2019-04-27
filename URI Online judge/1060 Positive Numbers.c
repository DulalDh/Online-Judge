#include<stdio.h>
main()
{
float a,b,c,d,e,f;
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
a=0;
}
else if(b>0)
{
count++;
b=0;
}

else if(c>0)
{
count++;
c=0;
}

else if(d>0)
{
count++;
d=0;
}

else if(e>0)
{
count++;
e=0;
}
else if(f>0)
{
count++;
f=0;
}
}
printf("%d valores positivos\n",count);
}
