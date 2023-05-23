#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>
#include <ctype.h>

/*
Descrição: função que recebe uma string contendo a placa e retorna se ela é válida ou não
Parâmetros: char*, booleana inteira
Retorna: booleana
*/
bool ValidarPlaca (char *placa){
    int tamanho_da_placa = strlen (placa);
    //Verifica se a placa tem o tamanho ideal
    if (tamanho_da_placa != 7 && tamanho_da_placa != 8){
        return false;
    }
    //Verifica se a seguência alfanumérica está adequada
    for(int i=0; i < 7; i++){
        if (i==3){
            if (!isdigit(placa[i])) {
                return false;
            }
        } 
        // Verifica se é uma letra maiúscula ou hífen
        else { 
            if (!isupper(placa[i]) && placa[i] != '-') {
                return false;
            }
        }
    }

    return true;
}  

int main (){
    char Placa[9];
    do{
        printf("Digite o numero da sua placa, caso queira fechar o programa digite (fechar): ");
        scanf("%s", Placa);
        if(strcmp (Placa, "fechar") == 0){
            break;
        }
        if( ValidarPlaca (Placa)){
            printf("Placa correta\n");
        }
        else {
            printf("Placa incorreta\n");
        }
    }
    while (true);
    return 0;
}
