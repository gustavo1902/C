#include<stdio.h>
void loop_count( int *i ) { // void não retorna valor
 printf( "Na função loop_count, i = " );
 while( *i < 10 )
 printf ( "%d ", (*i)++); //==> i = 2 3 4 5 6 7 8 9
}
int main( ) {
 int i = 2;
 printf( "\nEm main antes da chamada da função loop_count, i = %d.\n", i ); 
 loop_count( &i );
 printf( "\nEm main depois da chamada da função loop_count, i = %d.\n", i ); //==> a variável i foi modificada na funç~so i = 10.
}
