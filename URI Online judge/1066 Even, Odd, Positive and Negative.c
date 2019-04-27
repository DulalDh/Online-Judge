#include <iostream>
 
using namespace std;
 
int main() {
 
int a,b,c,d,e,count=0,count1=0,count2=0;
scanf("%d",&a);
scanf("%d",&b);
scanf("%d",&c);
scanf("%d",&d);
scanf("%d",&e);

if(a%2==0)
count++;
if(b%2==0)
count++;
if(c%2==0)
count++;
if(d%2==0)
count++;
if(e%2==0)
count++;

if(a>0)
count1++;
if(b>0)
count1++;
if(c>0)
count1++;
if(d>0)
count1++;
if(e>0)
count1++;

if(a<0)
count2++;
if(b<0)
count2++;
if(c<0)
count2++;
if(d<0)
count2++;
if(e<0)
count2++;
printf("%d valor(es) par(es)\n%d valor(es) impar(es)\n%d valor(es) positivo(s)\n%d valor(es) negativo(s)\n",count,5-count,count1,count2);
 
    return 0;
}