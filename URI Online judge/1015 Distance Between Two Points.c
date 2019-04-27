#include<stdio.h>
#include<math.h>
int main()
{
double x1,x2,y1,y2,Distance;
scanf("%lf",&x1);
scanf("%lf",&y1);
scanf("%lf",&x2);
scanf("%lf",&y2);
Distance=sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
printf("%.4f\n",Distance);
return 0;
}
