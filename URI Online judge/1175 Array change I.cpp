#include <iostream>
 
using namespace std;
 
int main() {
 
int i,X[20],j=0;
for(i=0;i<20;i++)
{
scanf("%d",&X[i]);
}
for(i=19;i>=0;i--)
{
printf("N[%d] = %d\n",j,X[i]);
j++;
}
 
    return 0;
}