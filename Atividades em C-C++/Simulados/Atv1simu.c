#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,reprovados=1,aprovados=1,alunos, soma2=0;
    float a,b,c,soma=0,media, media_classe;
    printf("\nDigite o numero de alunos: ");
    scanf("%d",&alunos);
    while(i<=alunos){
        printf("\nDigite as notas de cada aluno (n1 n2 n3) e cada prova vale 10: ");
        scanf("%f %f %f",&a,&b,&c);
        if(a>10 || b>10 || c>10){
            printf("\nNota invalida");
            continue;
        }
        soma=a+b+c;
        soma2+=soma;

        media_classe=soma2/alunos;
        media=soma/3;
        if(media<6){
            reprovados++;
        }
        else{
            aprovados++;
        }
        i++;
    }
    printf("\nA media da classe e: %.2f", media_classe);
    printf("\nO numero de aprovados e:%d", aprovados);
    printf("\nO numero de reprovados e:%d", reprovados);
    return 0;
}
