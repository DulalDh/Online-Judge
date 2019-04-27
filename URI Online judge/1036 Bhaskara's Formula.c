#include<stdio.h>
#include<math.h>
main()
{
float R1,R2,a,b,c;
scanf("%f",&a);
scanf("%f",&b);
scanf("%f",&c);
if(4*a*c>b*b||a==0||b==0)
printf("Impossivel calcular\n");
else
{
R1=(-b+sqrt(b*b-4*a*c))/(2*a);
R2=(-b-sqrt(b*b-4*a*c))/(2*a);
printf("R1 = %.5f\nR2 = %.5f\n",R1,R2);
}
}
