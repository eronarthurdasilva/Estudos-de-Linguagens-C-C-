#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
Descrição: função que recebe uma frase e elimina sequências de espaços contínuos
Parâmetros: char*
Retorna: void
*/
void EliminarEspacos(char* frase) {
    int tam_frase = strlen(frase);
    int i, j;
    for (i = 0, j = 0; i < tam_frase; i++) {
        if (!isspace(frase[i])) {
            frase[j++] = frase[i];
        } else if (i > 0 && !isspace(frase[i - 1])) {
            frase[j++] = ' ';
        }
    }
    if (j > 0 && isspace(frase[j - 1])) {
        frase[--j] = '\0';
    } else {
        frase[j] = '\0';
    }
}
int main() {
    char frase[100];
    printf("Digite uma frase com espacos em excesso: ");
    fgets(frase, 100, stdin);
    EliminarEspacos(frase);
    printf("Frase sem espacos em excesso: %s\n", frase);
    return 0;
}