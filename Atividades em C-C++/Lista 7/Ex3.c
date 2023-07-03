#include <stdio.h> 
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
/*
Descrição: Função que recebe duas frases como parâmetro e retorna em caixa alta
Parâmetros: String
Retorna: String
*/
void converter (char palavra1[], char palavra2[]){
    int tamanho = strlen (palavra1);
    int tamanho2 = strlen (palavra2);
    int i, j;
    for (i=0; i<tamanho; i++){
        palavra1[i] = toupper (palavra1[i]);

    }
    for (j=0; j<tamanho2; j++){
        palavra2[j] = toupper (palavra2[j]);
    }
}

int main (){
    char frase1[100], frase2[100];
    
    printf("Digite a primeira frase: ");
    fgets(frase1, sizeof(frase1), stdin);
    frase1[strcspn(frase1, "\n")] = '\0'; // removendo o \n do final
    
    printf("Digite a segunda frase: ");
    fgets(frase2, sizeof(frase2), stdin);
    frase2[strcspn(frase2, "\n")] = '\0'; // removendo o \n do final
    
    converter(frase1, frase2);
    
    printf("\nA palavra 1 em caixa alta e: %s", frase1);
    printf("\nA palavra 2 em caixa alta e: %s", frase2);
    
    return 0;
}
