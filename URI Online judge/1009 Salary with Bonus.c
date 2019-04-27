#include <stdio.h>
 
int main() {
char name[9];
double S,B,total;
gets(name);
scanf("%lf",&S);
scanf("%lf",&B);
if(name[0]=='J')
{
total=S+(B/100)*15;
printf("TOTAL = R$ %.2f\n",total);
}
else if(name[0]=='P')
{
total=S+(B/100)*15;
printf("TOTAL = R$ %.2f\n",total);
}
else
{
total=S+(B/100)*15;
printf("TOTAL = R$ %.2f\n",total);
}
    return 0;
}