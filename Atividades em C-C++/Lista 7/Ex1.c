#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/*
  Descrição: função que recebe uma string e retorna o número de caracteres
  Parâmetros: string, int cont 
  Retorna: Inteiro
*/


int count_alphanumeric_chars(char* str) {
    int count = 0;
    int length = strlen(str);
    
    for (int i = 0; i < length; i++) {
        if (isalnum(str[i])) {
            count++;
        }
    }
    
    return count;
}

int main() {
    char str[100];
    int count;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    
    count = count_alphanumeric_chars(str);
    
    printf("A string '%s' tem %d caracteres alfanumericos.\n", str, count);
    
    return 0;
}