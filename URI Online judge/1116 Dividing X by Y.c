#include <iostream>
 
using namespace std;
 
int main() {
 
int i,j,n,a[10000],b[10000];
float count;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
scanf("%d",&b[i]);
}
for(j=0;j<n;j++)
{
if(b[j]==0)
printf("divisao impossivel\n");
if(a[j]==0&&b[j]!=0)
printf("0.0\n");
if(a[j]!=0&&b[j]!=0)
{
count=(float)a[j]/b[j];
printf("%.1f\n",count);

}
}
 
    return 0;
}