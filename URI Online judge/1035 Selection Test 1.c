#include<stdio.h>
main()
{
int A,B,C,D;
scanf("%d",&A);
scanf("%d",&B);
scanf("%d",&C);
scanf("%d",&D);
if(B>C&&D>A&&(D+C)>(A+B)&&A%2==0)
{
printf("Valores aceitos\n");
}
else
printf("Valores nao aceitos\n");
}
