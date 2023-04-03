#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando as variaveis
    int dia, mes, ano;
    //solicitando ao usuario dia, data e mes
    printf("Digite uma data valida para o ano de 2022\n ");
    //salvando as variaveis
    scanf("%d %d %d", &dia, &mes, &ano);
    //Caso o ano não for igual a 2022 ira da ano invalido
    if(ano!=2022){
        printf("Ano invalido ");
    }
    //Fevereiro
    else if(mes==2){
        if(dia>=1 && dia<=28){
            printf("Data valida no ano de 2022");
        }
        else{
            printf("Data invalia no ano de 2022");
        }
    }
    //meses com ate 31 dias
    else if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10 || mes==12){

        if(dia>=1 && dia<=31){
            printf("Data valida no ano de 2022");
        }
        else{
            printf("Data invalida no ano de 2022");
        }
    }
    //meses com ate 30 dias
    else if(mes == 4 || mes == 6 || mes == 9 || mes == 11) {
        if(dia >= 1 && dia <= 30) {
            printf("Data valida no ano de 2022");
        }
        else {
            printf("Data invalida no ano de 2022");
        }
    }
    else{
        printf("Data valida no ano de 2022");
    }



}


