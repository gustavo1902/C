/*Leia um arquivo texto, a cada final de linha, adicione a linha
lida em uma estrutura de ponteiros para ponteiros

Implemente uma função substituir(str1,str2,str3)que procura
pela string str2 dentro da string str1. Ao encontrar str2,
substitui sua ocorrência por str3 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX 100

void substituir(char *str1, char *str2, char *str3) {
    int i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
    int tam1, tam2, tam3;
    char *aux1, *aux2, *aux3;

    tam1 = strlen(str1);
    tam2 = strlen(str2);
    tam3 = strlen(str3);

    aux1 = (char *) malloc(tam1 * sizeof(char));
    aux2 = (char *) malloc(tam2 * sizeof(char));
    aux3 = (char *) malloc(tam3 * sizeof(char));

    for (i = 0; i < tam1; i++) {
        aux1[i] = str1[i];
    }

    for (j = 0; j < tam2; j++) {
        aux2[j] = str2[j];
    }

    for (k = 0; k < tam3; k++) {
        aux3[k] = str3[k];
    }

    for (m = 0; m < tam1 - tam2 + 1; m++) {
        if (aux1[m] == aux2[0]) {
            for (n = 0; n < tam2; n++) {
                if (aux1[m + n] != aux2[n]) {
                    break;
                }
            }
            if (n == tam2) {
                for (o = 0; o < tam3; o++) {
                    aux1[m + o] = aux3[o];
                }
                for (p = m + tam3; p < tam1 - tam2 + 1; p++) {
                    aux1[p] = aux1[p + tam2 - tam3];
                }
                tam1 = tam1 - tam2 + tam3;
            }
        }
    }

    for (q = 0; q < tam1; q++) {
        str1[q] = aux1[q];
    }

    free(aux1);
    free(aux2);
    free(aux3);
}

int main(int argc, char **argv) {
    // Ponteiro para a linha atual do arquivo
    char *linha = NULL;
    // Tamanho da linha
    size_t tamanho = 0;
    // Quantidade de caracteres lidos da linha
    ssize_t leitura;

    // Abre o arquivo em modo leitura
    FILE *fp = fopen("in.txt", "r");
    if (fp == NULL) {
        perror("Erro ao abrir o arquivo");
        exit(EXIT_FAILURE);
    }

    // Lê cada linha do arquivo até o final do arquivo
    while ((leitura = getline(&linha, &tamanho, fp)) != -1) {
        // Substitui a string procurada pela string de substituição na linha atual
        substituir(linha, "text", "textual");
        // Imprime a linha modificada na tela
        printf("%s", linha);
    }

    // Fecha o arquivo
    fclose(fp);
    // Libera a memória alocada para a linha
    if (linha) {
        free(linha);
    }

    return 0;
}
