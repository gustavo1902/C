#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, nota3, nota4, media;
    nota1 = nota2 = nota3 = nota4 = media = 0;

    printf("========== Media Escolar ==========\n");
    printf("Digite a primeira nota bimestral: ");
    scanf("%lf", &nota1);
    printf("Digite a segunda nota bimestral: ");
    scanf("%lf", &nota2);
    printf("Digite a terceira nota bimestral: ");
    scanf("%lf", &nota3);
    printf("Digite a quarta nota bimestral: ");
    scanf("%lf", &nota4);

    media = (nota1 + nota2 + nota3 + nota4) / 4;

    printf("Sua média foi de: %.f\n",  media);

    if (media >= 6)
    {
        printf("Parabéns, você foi aprovado!\n");
    }
    else
    {
        printf("Você foi reprovado!\n");
    }
    return 0;
}
