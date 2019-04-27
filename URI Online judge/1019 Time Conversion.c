#include<stdio.h>
main()
{
int H,M,S,second;
float h,m;
scanf("%d",&second);
H=second/3600;
h=((second/3600.0)-H)*3600.0;
M=h/60;
m=((h/60.0)-M)*60.0;
S=m;
printf("%d:%d:%d\n",H,M,S);
}
