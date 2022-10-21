//Resolvendo a fórmula de Bhaskara com C
#include <stdio.h>

int main(){
    double a,b,c x1,x2, delta;
    printf("Digite os valores a, b, e c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
  
    delta = b*b-4*a*c;
    if(delta>0){
      printf("não ha raizes reais");
    }else{
      if(delta==0){
        x1 = (-b + sqrt(delta))/(2*a);
          printf("a unica raiz é %lf \n",x1);
      }else{
        x1 = (-b + sqrt(delta))/(2*a);
        x2 = (-b + sqrt(delta))/(2*a);
          printf("as duas raizes sao %lf %lf \n",x1,x2);
      }
    return 0;
}
