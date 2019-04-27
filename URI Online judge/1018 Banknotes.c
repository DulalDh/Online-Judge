#include<stdio.h>
main()
{
int A,B,C,D,E,F,G;
float N,a,b,c,d,e,f,g;
scanf("%f",&N);
A=N/100;
a=((N/100.0)-A)*100.0;
B=a/50;
b=((a/50.0)-B)*50.0;
C=b/20;
c=((b/20.0)-C)*20.0;
D=c/10;
d=((c/10.0)-D)*10.0;
E=d/5;
e=((d/5.0)-E)*5.0;
F=e/2;
f=((e/2.0)-F)*2.0;
G=f/1;
printf("NOTAS:\n%d nota(s) de R$ 100,00\n",A);
printf("%d nota(s) de R$ 50,00\n",B);
printf("%d nota(s) de R$ 20,00\n",C);
printf("%d nota(s) de R$ 10,00\n",D);
printf("%d nota(s) de R$ 5,00\n",E);
printf("%d nota(s) de R$ 2,00\n",F);
printf("MEDAS:\n%d nota(s) de R$ 1,00\n",G);
}
