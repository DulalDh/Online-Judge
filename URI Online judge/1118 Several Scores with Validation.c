#include <stdio.h>

int main(){
      int a=1;
            double x,y,media = 0.0;

      while(a!=2)
      {


         ler_x: scanf("%lf",&x);
         if(x>10.0||x<0.0){
            printf("nota invalida\n");
            goto ler_x;
         }

         ler_y: scanf("%lf",&y);
         if(y>10.0||y<0.0){
            printf("nota invalida\n");
            goto ler_y;
         }
         media=(x+y)/2;
         printf("media = %.2lf\n",media);
        ler_a:
        printf("novo calculo (1-sim 2-nao)\n");
        scanf("%d",&a);
        if(a<1||a>2)
        {
            goto ler_a;
        }
      }
return(0);
}