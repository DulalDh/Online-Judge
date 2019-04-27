#include <stdio.h>
 
int main() {
int NUMBER,HOUR;
float AMOUNT,SALARY;
scanf("%d%d%f",&NUMBER,&HOUR,&AMOUNT);
SALARY=HOUR*AMOUNT;
printf("NUMBER = %d\nSALARY = U$ %.2f\n",NUMBER,SALARY);
    return 0;
}