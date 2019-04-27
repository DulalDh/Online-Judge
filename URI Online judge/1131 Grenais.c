#include <stdio.h>

int main(){
int x,y;
int a=1;
int n=0;
int Inter=0;
int Gremio=0;
int Empates=0;

while(a!=2){
scanf("%d",&x);
scanf("%d",&y);
if(x>y)
Inter+=1;
if(x<y)
Gremio+=1;
if(x==1)
Empates+=1;
scanf("%d",&a);
printf("Novo grenal (1-sim 2-nao)\n");
n++;
}
printf("%d grenais\n",n);
printf("Inter:%d\n",Inter);
printf("Gremio:%d\n",Gremio);
printf("Empates:%d\n",Empates);
if(Inter>Gremio)
printf("Inter venceu mais\n");

if(Inter<Gremio)
printf("Gremio venceu mais\n");

if(Inter==Gremio)
printf("Não houve vencedor\n");
}
