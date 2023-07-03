#include <stdio.h>
#include <string.h>
#include <ctype.h>

void contar_vogais(char str[], int vogais[]);

int main() {
    char str[100];
    int vogais[5] = {0};
    
    // lê a string do usuário
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    
    // conta as vogais na string
    contar_vogais(str, vogais);
    
    // imprime o resultado
    printf("Número de vogais a %d\n", vogais[0]);
    printf("Número de vogais e: %d\n", vogais[1]);
    printf("Número de vogais i: %d\n", vogais[2]);
    printf("Número de vogais o: %d\n", vogais[3]);
    printf("Número de vogais u: %d\n", vogais[4]);
    
    return 0;
}

void contar_vogais(char str[], int vogais[]) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        char c = tolower(str[i]); // converte a letra para minúscula
        if (c == 'a') {
            vogais[0]++;
        } else if (c == 'e') {
            vogais[1]++;
        } else if (c == 'i') {
            vogais[2]++;
        } else if (c == 'o') {
            vogais[3]++;
        } else if (c == 'u') {
            vogais[4]++;
        }
    }
}
