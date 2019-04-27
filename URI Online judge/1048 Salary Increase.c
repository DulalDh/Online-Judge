#include<stdio.h>
main()
{
float s,a,b;
scanf("%f",&s);

if(s>0&&s<=400)
{
a=s+(s/100.0)*15;
b=(s/100.0)*15;
printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15 %%\n",a,b);
}
else if(s>400&&s<=800)
{
a=s+(s/100.0)*12;
b=(s/100.0)*12;
printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12 %%\n",a,b);
}

else if(s>800&&s<=1200)
{
a=s+(s/100.0)*10;
b=(s/100.0)*10;
printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10 %%\n",a,b);
}

else if(s>1200&&s<=2000)
{
a=s+(s/100.0)*7;
b=(s/100.0)*7;
printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7 %%\n",a,b);
}
else
{
a=s+(s/100.0)*4;
b=(s/100.0)*4;
printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4 %%\n",a,b);
}

}
