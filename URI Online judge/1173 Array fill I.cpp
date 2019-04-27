#include <iostream>
 
using namespace std;
 
int main() {
 
int X[10],i,n,sum;
scanf("%d",&n);
for(i=0;i<10;i++)
{
if(i==0)
sum=n;
else
sum=sum*2;
X[i]=sum;
}
for(i=0;i<10;i++)
{
printf("N[%d] = %d\n",i,X[i]);
}
 
    return 0;
}