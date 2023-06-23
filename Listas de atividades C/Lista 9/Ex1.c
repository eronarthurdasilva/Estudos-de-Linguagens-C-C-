#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 10
struct Livros
{
   int id;
   char autor[100];
   int ano;
   char titulo[100];
};
int cont = 0;
void armazena_dados (struct Livros biblioteca[N], int L){
    int i;
    if(cont < L){
       for(i = 0; i < L && i <= cont; i++, cont++){
            biblioteca[i].id = cont+1;
            //Solicita o nome do autor do livro
            printf("Digite o nome do autor do livro:\n");
            scanf("%[^\n]", &biblioteca[i].autor);
            fflush(stdin);
            //Solicita o ano do livro
            printf("Digite o ano do livro:\n");
            scanf("%d", &biblioteca[i].ano);
            fflush(stdin);
            //Solicita o Nome do livro
            printf("Digite o nome do livro:\n");
            scanf("%[^\n]", &biblioteca[i].titulo);
            fflush(stdin);
            
        }
    }

}
void mostra_livro (struct Livros biblioteca[N], int L){
    int ano=0, i;
    printf("Digite na barra de pesquisa o ano desejado\n");
    printf("PESQUISA: ");
    scanf("%d", &ano);
    fflush(stdin);

    for(i=0; i < L && i < cont; i++){
        if (biblioteca[i].ano == ano){
            printf("\nID: %d\n", biblioteca[i].id);
            printf("Titulo: %s\n", biblioteca[i].titulo);
            printf("Autor: %s\n", biblioteca[i].autor);
        }
    }
    printf("------------");
}
void atualizar_livro (struct Livros biblioteca[N], int L){
    int i;
    char t[100];
    char novo[100];

    printf("Diga o livro que quer atualizar: ");
    scanf("%[^\n]", t);
    fflush(stdin);
    for(i = 0; i< L; i++){
        if(t == biblioteca[i].titulo){
            printf("Digite o nome do livro atualizado: ");
            scanf("%[^\n]", novo);
            fflush(stdin);

            strcpy(biblioteca[i].titulo, novo);
        }
    }
}
int main(){
    struct Livros biblioteca[N];
    int quant=0;
    int op=0;
    printf("Digite quantos livros quer colocar: ");
    scanf("%d", &quant);
    fflush(stdin);
    do{
        printf("---BIBLIOTECA---\n");
        printf("(1) Cadastrar Livros\n");
        printf("(2) Buscar por livro\n");
        printf("(3) Atualizar o nome do livro\n");
        printf("(0) Sair da Biblioteca");
        scanf("%d", &op);
        fflush(stdin);
        switch (op)
        {
        case 1:
            armazena_dados(biblioteca, quant);

            break;
        case 2:
            mostra_livro(biblioteca, quant);

            break;
        case 3:
            atualizar_livro(biblioteca, quant);
            break;
        case 0:
            printf("\nAté mais tarde, bebe");
            break;
        default:
            printf("\nEscolha errada");
            break;
        }
    }
    while(op != 0);
    return 0;


}
