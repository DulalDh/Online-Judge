#include<stdio.h>
main()
{
int A,i,j;
float N[100000],M[100000];
scanf("%d",&A);
for(i=0;i<A;i++)
{
for(j=0;j<3;j++)
{
scanf("%f",&N[j]);
}
M[i]=(N[0]*2+N[1]*3+N[2]*5)/10.0;
}
for(i=0;i<A;i++)
{
printf("%.1f\n",M[i]);
}
}
