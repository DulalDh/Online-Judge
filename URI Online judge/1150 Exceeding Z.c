#include <stdio.h>

int main(){

int x,z;
int N=0;
int n=0;
scanf("%d",&x);

ler_z:scanf("%d",&z);
{
if(x==z||x>z)
goto ler_z;
}

while((x+n)<z)
{
 n+=x+1;

 N++;
}

printf("%d\n",N);
}
