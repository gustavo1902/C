//Descobrir todos os números primos de 1 a 500
#include <stdio.h>
#include <stdlib.h>

int ehPrimo(int x){
    int i, divisores = 0;

    for(i = 1; i <= x; i++){
        if(x % i == 0)
            divisores++;
    }

    if(divisores == 2)
        return 1;
    else
        return 0;
}

int main(){
    int i;

    for(i = 1; i <= 500; i++){
        if(ehPrimo(i) == 1)
            printf("%d, ", i);
    }
    return 0;
}
