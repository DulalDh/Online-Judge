#include <iostream>
 
using namespace std;
 
int main() {
 
unsigned long long int array[61];
unsigned long long int sum,first,second;
sum=first=0;
second=1;
int i,j,n;

for(j=0;j<=60;j++)
{
sum=sum+first;
first=second;
second=sum;
array[j]=sum;
}
scanf("%d",&n);
int array1[n];
for(i=0;i<n;i++)
scanf("%d",&array1[i]);

for(i=0;i<n;i++)
printf("Fib(%d) = %llu\n",array1[i],array[array1[i]]);
    return 0;
}