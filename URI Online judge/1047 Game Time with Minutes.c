#include <iostream>
 
using namespace std;
 
int main() {
 
int A,B,C,D,H,M;
scanf("%d",&A);
scanf("%d",&B);
scanf("%d",&C);
scanf("%d",&D);
if(A<C)
H=C-A;
else
H=(24-A)+C;
if(B>D)
{
M=(60-B)+D;
H=H-1;
}
else
M=D-B;
printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",H,M);
 
    return 0;
}