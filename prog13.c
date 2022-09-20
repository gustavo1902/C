#include<stdio.h>
#include<string.h>
int main(){
 char frase[101];
 char letra;
 int i, cont, tam ;

 printf("\n\nDigite uma frase (Max. 100 caracteres): ");
 gets(frase);
 tam = strlen(frase);
 printf("\n\nDigite a letra que você deseja procurar: ");
 scanf("%c",&letra);

 cont =0;
 i=0;
 while (i <= tam) {

   if (frase[i] == letra) {
     cont = cont + 1;
   }
   i++;
 }
 printf("\n\nA letra \'%c\' apareceu %d vezes", letra, cont);

}
