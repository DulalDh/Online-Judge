#include<stdio.h>
main()
{
float N;
scanf("%f",&N);

if(N<=2000.00)
printf("Isento\n");

if(N>=2000.01&&N<=3000.00)
{
N-=2000;
printf("R$ %.2f",(N/100)*8);
}
if(N>=3000.01&&N<=4500.00)
{
N-=3000.00;
printf("R$ %.2f",80+(N/100)*18);
}

if(N>4500.00)
{
N-=4500.00;
printf("R$ %.2f",80+270+(N/100)*28);
}
}
