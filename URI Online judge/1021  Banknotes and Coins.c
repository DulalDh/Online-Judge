#include <iostream>
 
using namespace std;
 
int main() {
 
int A,B,C,D,E,F,G,n,H,I,J,K,L;
double N,a,b,c,d,e,f,g,m,h,i,j,k;
scanf("%lf",&N);
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
n=N;
m=N-n;
H=m/.50;
h=((m/.50)-H)*.50;
I=h/.25;
i=((h/.25)-I)*.25;
J=i/.10;
j=((i/.10)-J)*.10;
K=j/.05;
k=((j/.05)-K)*.05;
L=k/.01;

printf("NOTAS:\n%d nota(s) de R$ 100.00\n",A);
printf("%d nota(s) de R$ 50.00\n",B);
printf("%d nota(s) de R$ 20.00\n",C);
printf("%d nota(s) de R$ 10.00\n",D);
printf("%d nota(s) de R$ 5.00\n",E);
printf("%d nota(s) de R$ 2.00\n",F);

printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n",G);
printf("%d moeda(s) de R$ 0.50\n",H);
printf("%d moeda(s) de R$ 0.25\n",I);
printf("%d moeda(s) de R$ 0.10\n",J);
printf("%d moeda(s) de R$ 0.05\n",K);
printf("%d moeda(s) de R$ 0.01\n",L);
 
 
    return 0;
}