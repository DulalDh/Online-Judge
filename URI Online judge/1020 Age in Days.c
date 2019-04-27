#include<stdio.h>
main()
{
int Y,M,D,N;
float y,m;
scanf("%d",&N);
Y=N/365;
y=((N/365.0)-Y)*365.0;
M=y/30;
m=((y/30.0)-M)*30;
D=m;
printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",Y,M,D);
}
