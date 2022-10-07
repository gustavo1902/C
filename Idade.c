//Classifica se a pessoa é jovem, adulto ou idoso

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int iJ, iI;
    iJ = 17;
    iI = 60;
    printf("========== Idade ==========\n");
    int idade = 0;
    printf("Digite sua idade: ");
    scanf("%i", &idade);

    if(idade <= iJ)
    {
        printf("Voce é jovem!\n");
    }
    else if(idade > iJ && idade <= iI)
    {
        printf("Voce é adulto!\n");
    }
    else
    {
        printf("Voce é idoso!\n");
    }
    return 0;
}
