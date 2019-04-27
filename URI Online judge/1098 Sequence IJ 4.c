#include<stdio.h>
main()
{
float i,j,k=0,I=0,l;
int A,B,J;
for(i=0;i<=2.2;i=i+.2)
{
    if(i>0)
    {
    k=k+.2;
    }
for(j=1;j<=3;j++)
{
l=j+k;
    if(i==0||i==1)
    {
    A=(int) i;
    B=(int) l;
    printf("I=%d J=%d\n",A,B);
    }
    else if(i>1.9)
    {
    A=2;
    B=(int) l;
     printf("I=%d J=%d\n",A,B);

    }
    else
   printf("I=%.1f J=%.1f\n",i,l);

}
}
}
