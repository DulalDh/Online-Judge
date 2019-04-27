#include <stdio.h>
int main()
{
    double A, B, C, tem;
    scanf("%lf%lf%lf", &A, &B, &C);
if(B>A&&B>C)
{
tem=B;
B=A;
A=tem;
}
if(C>A&&C>B)
{
tem=C;
C=A;
A=tem;
}
    if(A>0 && B>0 && C>0) {
        if(A>=B+C)
            printf("NAO FORMA TRIANGULO\n");
        else
        {
        if(A*A==B*B+C*C)
            printf("TRIANGULO RETANGULO\n");
        if(A*A>B*B+C*C)
            printf("TRIANGULO OBTUSANGULO\n");
        if(A*A<B*B+C*C)
            printf("TRIANGULO ACUTANGULO\n");
        if(A==B&&B==C&&C==A)
            printf("TRIANGULO EQUILATERO\n");
        if((((A==B && A!=C) || (A==B && B!=C)) || ((A==C && A!=B) || A==C && C!=B)) || ((B==C && B!=A)) || ((B==C && C!=A)))
            printf("TRIANGULO ISOSCELES\n");
        }
    }
}
