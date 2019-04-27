#include <iostream>
 
using namespace std;
 
int main() {
 
int A,N,i,sum=0;
scanf("%d",&A);
scanf("%d",&N);
while(N<=0)
scanf("%d",&N);

for(i=1;i<=N;i++)
{
 sum=A+sum;
 A++;

}
printf("%d\n",sum);
    return 0;
}