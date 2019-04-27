#include<stdio.h>
main()
{
int A,B;
scanf("%d",&A);
scanf("%d",&B);
if(A<B)
printf("O JOGO DUROU %d HORA(S)\n",B-A);
else
printf("O JOGO DUROU %d HORA(S)\n",(24-A)+B);
}
