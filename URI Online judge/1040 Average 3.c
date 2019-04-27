#include<stdio.h>
main()
{
float n1,n2,n3,n4,n5,Media,Media2;
scanf("%f",&n1);
scanf("%f",&n2);
scanf("%f",&n3);
scanf("%f",&n4);
Media=(n1*2+n2*3+n3*4+n4*1)/10;
if(Media>=5.0&&Media<=6.9)
{
scanf("%f",&n5);
Media2=(Media+n5)/2;
}
printf("Media: %.1f\n",Media);
if(Media>=7)
printf("Aluno aprovado.\n");
if(Media<5)
printf("Aluno reprovado.\n");

if(Media>=5.0&&Media<=6.9){
printf("Aluno em exame.\n");
printf("Nota do exame: %.1f\n",n5);
if(Media2>=5)
printf("Aluno aprovado.\n");
else
printf("Aluno reprovado.\n");
printf("Media final: %.1f\n",Media2);
}

}
