#include <iostream>
 
using namespace std;
 
int main() {
 
char ch[4];
int D,H,M,S,D2,H2,M2,S2;
scanf("%s",ch);
scanf("%d",&D);
scanf("%d",&H);
scanf("%s",ch);
scanf("%d",&M);
scanf("%s",ch);
scanf("%d",&S);

scanf("%s",ch);
scanf("%d",&D2);
scanf("%d",&H2);
scanf("%s",ch);
scanf("%d",&M2);
scanf("%s",ch);
scanf("%d",&S2);
D=D2-D;
if(H<=H2)
H=H2-H;
if(H>H2)
{
H=H2+24-H;
D=D-1;
}
if(M<=M2)
M=M2-M;
if(M>M2)
{
M=M2+60-M;
H=H-1;
}
if(S<=S2)
S=S2-S;
if(S>S2)
{
S=S2+60-S;
M=M-1;
}

printf("%d dia(s)\n%d hora(s)\n%d minuto(s)\n%d segundo(s)\n",D,H,M,S);
 
    return 0;
}