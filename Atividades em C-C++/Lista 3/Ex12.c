#include <stdio.h>
#include <stdlib.h>

int main()
{
    ///Declara as variaveis
    int aprovados=0, reprovados=0;
    float nota, nota_menor=0, nota_maior=0, media=0;
    ///Sequencia para definir notas
    for(int i=1; i<=10; i++){
        printf("Digite as notas de todos os 10 alunos:\n ");///solicita as notas
        scanf("%f",&nota);
        media+=nota;
        if(i==1){///inicio do programa a nota menor se torna a primeira
            nota_menor=nota;
        }
        if(nota<nota_menor){///caso a proxima nota seja menor que a primeira substitui
            nota_menor=nota;
        }
        else if(nota>nota_maior){/// maior nota da disciplina
            nota_maior=nota;
        }
        if(nota>=60){///aprovados
            aprovados++;

        }
        else if(nota<60){///reprovados
            reprovados++;
        }

    }
    ///Mostra o resultado

    printf("\n A Media dos alunos è %.2f", media/=10);
    printf("\n A Menor nota entre os alunos e %.2f", nota_menor);
    printf("\n A Maior nota entre os alunos e %.2f", nota_maior);
    printf("\n O numero de alunos aprovados e %d", aprovados);
    printf("\n O numero de alunos reprovados e %d", reprovados);
    return 0;

}
