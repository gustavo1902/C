#include<stdio.h>
#include<math.h>

float CalculaArea(float largura, float comprimento){
  return largura * comprimento;
}

float Lampada(int tipo, float metragem){
     float quantidade;
     int potencia;
    switch(tipo){
      case 0:
        potencia = 12;
        break;
      case 1:
        potencia = 15;
        break;
      case 2:
        potencia = 18;
        break;
      case 3:
        potencia = 20;
        break;
      case 4:
        potencia = 22;
        break;
      default:
        potencia = 0;  // Tipo inválido
    }
  quantidade = (metragem * potencia) / 60;
  return quantidade;
}
int main(){

 struct {
 int tipo;
 float larg, comp;
 } comodo;
 float nlampadas;
 float tamanho;
 printf("\n\nDigite o tipo de comodo (0 ate 4):");
 scanf("%d", &comodo.tipo);
 while(comodo.tipo != -1) {
  printf("\n\nDigite a largura do comodo:");
  scanf("%f", &comodo.larg);
  printf("\n\nDigite o comprimento do comodo:");
  scanf("%f", &comodo.comp);
  tamanho = CalculaArea(comodo.larg, comodo.comp);
  nlampadas = Lampada(comodo.tipo, tamanho);
  printf("\n\n Pela metragem de seu comodo voce ira precisar de %f lampadas",ceil(nlampadas));
  printf("\n\nDigite o tipo de comodo (0 ate 4):");
  scanf("%d", &comodo.tipo);

 }
}
