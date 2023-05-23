#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
Descrição: Procedimento que recebe infinitos nomes, e exibe o primeiro e o ultimo nome
Parâmetros: *char
*/
void identificar_nomes() {
    char nome[100], primeiro_nome[100] = "", ultimo_nome[100] = "";

    printf("Digite os nomes que deseja (para sair, digite 'stop'):\n");

    while(1) {
        scanf("%s", nome);

        if (strcmp(nome, "stop") == 0) {
            break;
        }

        if (strlen(primeiro_nome) == 0) {
            strcpy(primeiro_nome, nome);
        } else if (strcmp(nome, primeiro_nome) < 0) {
            strcpy(primeiro_nome, nome);
        } else if (strcmp(nome, ultimo_nome) > 0) {
            strcpy(ultimo_nome, nome);
        }
    }

    printf("Primeiro nome: %s\nUltimo nome: %s\n", primeiro_nome, ultimo_nome);
}

int main() {
    identificar_nomes();
    return 0;
}
