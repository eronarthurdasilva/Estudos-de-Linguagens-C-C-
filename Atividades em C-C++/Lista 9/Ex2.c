#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void escreverNumeros() {
    FILE *arquivo;
    char numeros[100];

    arquivo = fopen("numeros.txt", "w");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    printf("Digite os números (digite 'end' para parar):\n");

    while (fgets(numeros, sizeof(numeros), stdin)) {
        if (strcmp(numeros, "end\n") == 0) {
            break;
        }
        fputs(numeros, arquivo);
    }

    fclose(arquivo);
    printf("Números escritos no arquivo com sucesso.\n");
    printf("\n-----------------------------------------------------\n");
}

void lerNumeros() {
    FILE *arquivo;
    char linha[100];
    int numero, soma = 0;

    arquivo = fopen("numeros.txt", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    while (fgets(linha, sizeof(linha), arquivo)) {
        char *token = strtok(linha, " \n");
        while (token != NULL) {
            numero = atoi(token);
            soma += numero;
            token = strtok(NULL, " \n");
        }
    }

    fclose(arquivo);
    printf("A soma dos números é: %d\n", soma);
    printf("\n-----------------------------------------------------\n");
}

void mostrarConteudoHTML() {
    FILE *arquivo;
    char caractere;

    arquivo = fopen("pagina.html", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    printf("Conteúdo do arquivo HTML:\n");

    while ((caractere = fgetc(arquivo)) != EOF) {
        printf("%c", caractere);
    }

    fclose(arquivo);
    printf("\n-----------------------------------------------------\n");
}

void fazerBackupHTML() {
    FILE *arquivo, *arquivoBackup;
    char nomeArquivoBackup[100], caractere;

    arquivo = fopen("pagina.html", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return;
    }

    printf("Digite o nome do arquivo de backup: ");
    scanf("%s", nomeArquivoBackup);

    arquivoBackup = fopen(nomeArquivoBackup, "w");

    if (arquivoBackup == NULL) {
        printf("Erro ao criar o arquivo de backup.\n");
        fclose(arquivo);
        return;
    }

    while ((caractere = fgetc(arquivo)) != EOF) {
        fputc(caractere, arquivoBackup);
    }

    fclose(arquivo);
    fclose(arquivoBackup);
    printf("Backup do arquivo HTML criado com sucesso.\n");
    printf("\n-----------------------------------------------------\n");
}

int main() {
    char opcao;

    do {
        printf("\n\t\t\tMENU:\n");
        printf("\ta) Escrever números em arquivo\n");
        printf("\tb) Ler números do arquivo e calcular a soma\n");
        printf("\tc) Mostrar conteúdo de um arquivo HTML\n");
        printf("\td) Fazer backup de um arquivo HTML\n");
        printf("\tx) Sair\n");

        printf("\n\tEscolha uma opção: ");
        scanf(" %c", &opcao);

        printf("\n-----------------------------------------------------\n");

        switch (opcao) {
            case 'a':
                printf("\n");
                escreverNumeros();
                break;
            case 'b':
                printf("\n");
                lerNumeros();
                break;
            case 'c':
                printf("\n");
                mostrarConteudoHTML();
                break;
            case 'd':
                printf("\n");
                fazerBackupHTML();
                break;
            case 'x':
                printf("\n");
                printf("Saindo...\n");
                break;
            default:
                printf("\n");
                printf("Opção inválida. Tente novamente...\n");
                printf("\n-----------------------------------------------------\n");
        }
    } while (opcao != 'x');

    return 0;
}
