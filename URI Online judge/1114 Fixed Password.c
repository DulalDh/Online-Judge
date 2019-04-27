#include<stdio.h>
main()
{
int i,j,a[10000];
for(j=0; ;j++)
{
scanf("%d",&a[j]);
if(a[j]==2002)
break;
}
for(i=0;i<=j;i++)
{
if(a[i]==2002)
printf("Acesso Permitido\n");
else
printf("Senha Invalida\n");
}
}
