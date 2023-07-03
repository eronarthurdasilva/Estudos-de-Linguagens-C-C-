#include <stdio.h>
#include <ctype.h>

int num_digitos(char str[]);
void num_vogais(char str[], int *count);

int main() {
    char str[] = "AABEC19D";
    int num_dig, num_vog = 0;
    num_dig = num_digitos(str);
    num_vogais(str, &num_vog);
    printf("Numero de digitos: %d\n", num_dig); // Saída: 2
    printf("Numero de vogais: %d\n", num_vog); // Saída: 3
    return 0;
}

int num_digitos(char str[]) {
    int i, count = 0;
    for (i = 0; str[i] != '\0'; i++) {
        if (isdigit(str[i])) {
            count++;
        }
    }
    return count;
}

void num_vogais(char str[], int *count) {
    int i;
    *count = 0;
    for (i = 0; str[i] != '\0'; i++) {
        switch (tolower(str[i])) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                (*count)++;
                break;
            default:
                break;
        }
    }
}
