#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


/*
 Descrição: função que conta o número de ocorrências de um caractere em uma string
 Parâmetros: string, contadot inteiro
 Retorna: o número total de ocorrências do caractere na string
 */
int contador_caractere(char *str, char c) {
    int contador = 0;
    int tamanho = strlen(str);

    for (int i = 0; i < tamanho; i++) {
        if (str[i] == c) {
            contador++;
        }
    }

    return contador;
}

int main() {
    char str[100];
    char c;
    printf("Digite uma palavra: ");
    scanf("%s", str);
    printf("Digite um caractere: ");
    scanf(" %c", &c);

    int num_ocorrencias = contador_caractere(str, c);
    printf("O caractere '%c' ocorre %d vezes na string '%s'.\n", c, num_ocorrencias, str);

    return 0;
}

