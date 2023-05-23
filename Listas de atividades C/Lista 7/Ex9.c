#include <stdio.h>
#include <string.h>

/*
Descrição: procedimento que recebe três strings, concatena elas e exibe o resultado
Parâmetros: char*, char*, char*
*/
void ConcatenarStrings(char* string1, char* string2, char* string3) {
    char resultado[100];
    strcpy(resultado, string1);
    strcat(resultado, string2);
    strcat(resultado, string3);
    printf("Resultado da concatenacao: %s\n", resultado);
}

int main() {
    char str1[50], str2[50], str3[50];
    printf("Digite a primeira string: ");
    scanf("%s", str1);
    printf("Digite a segunda string: ");
    scanf("%s", str2);
    printf("Digite a terceira string: ");
    scanf("%s", str3);
    ConcatenarStrings(str1, str2, str3);
    return 0;
}
