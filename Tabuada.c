// DECLARAÇÕES DAS BIBLIOTECAS
#include <stdio.h>
#include <stdlib.h>

// BIBLIOTECA PARA O IDIOMA PORTUGUÊS
#include <locale.h>

// DECLARAÇÃO DE VARIÁVEIS
int numero;
int contador;
int resultado;
int decisao;

// DECLARAÇÃO DE FUNÇÕES

// PRINCIPAL
int main( int argc, char *argv[] )
{
 // TRANSMITIR PARA O IDIOMA PORTUGUÊS
 setlocale( LC_ALL, "Portuguese" );
 
 // MUDAR A COR DO TEXTO PARA VERMELHO
  system("color C");
  
  printf("\n Digite a tabuada que deseja saber : ");
  scanf("%d", &numero );
  
  system("cls");
  
  printf("\n Então você quer saber a tabuada de %d, é isso mesmo ? ", numero );
  
 printf("\n 1 - sim \n");
   printf(" 2 - nao \n \n ");
   scanf("%d", &decisao );
   
 system("cls");
  
 if( decisao == 1 )
  {
   printf("\n --- TABUADA DE %d ----- \n", numero);
   
   for( contador = 0 ; contador < 11 ; contador ++ )
   {
    resultado = numero * contador ;
    
    system(" Color A");
    printf(" \n %d x %d = %d \n", numero, contador, resultado );
  }
 }
 
 else
 {
  printf("\n NÃO VAI TER TABUADA !!! \n");
 }
  
  return 0;
 }
