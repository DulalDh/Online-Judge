#include<stdio.h>
main()
{
double a,b,c;
scanf("%lf",&a);
scanf("%lf",&b);
scanf("%lf",&c);
printf("TRIANGULO: %.3f\n",.5*a*c);
printf("CIRCULO: %.3f\n",3.14159*c*c);
printf("TRAPEZIO: %.3f\n",.5*(a+b)*c);
printf("QUADRADO: %.3f\n",b*b);
printf("RETANGULO: %.3f\n",a*b);
}
