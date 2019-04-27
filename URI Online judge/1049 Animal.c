#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
std::string a,b,c;
cin>>a;
cin>>b;
cin>>c;
if(a=="vertebrado"&&b=="ave"&&c=="carnivoro")
printf("aguia\n");
else if(a=="vertebrado"&&b=="ave"&&c=="onivoro")
printf("pomba\n");
else if(a=="vertebrado"&&b=="mamifero"&&c=="onivoro")
printf("homem\n");
else if(a=="vertebrado"&&b=="mamifero"&&c=="herbivoro")
printf("vaca\n");
else if(a=="invertebrado"&&b=="anelideo"&&c=="onivoro")
printf("minhoca\n");
else if(a=="invertebrado"&&b=="anelideo"&&c=="hematofago")
printf("sanguessuga\n");
else if(a=="invertebrado"&&b=="inseto"&&c=="hematofago")
printf("pulga\n");
else
printf("lagarta\n");
 
    return 0;
}