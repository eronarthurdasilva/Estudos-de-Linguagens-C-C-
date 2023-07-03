#include <stdio.h>

void ler_temperaturas(float temperaturas[]);
float menor_temperatura(float temperaturas[]);
float maior_temperatura(float temperaturas[]);
float temperatura_media(float temperaturas[]);
int dias_abaixo_da_media(float temperaturas[], float media);

int main() {
    float temperaturas[31];
    float menor_temp, maior_temp, media_temp;
    int dias_abaixo_media;
    
    ler_temperaturas(temperaturas);
    menor_temp = menor_temperatura(temperaturas);
    maior_temp = maior_temperatura(temperaturas);
    media_temp = temperatura_media(temperaturas);
    dias_abaixo_media = dias_abaixo_da_media(temperaturas, media_temp);
    
    // imprime os resultados
    printf("Menor temperatura: %.2f graus Celsius\n", menor_temp);
    printf("Maior temperatura: %.2f graus Celsius\n", maior_temp);
    printf("Temperatura média: %.2f graus Celsius\n", media_temp);
    printf("Número de dias com temperatura abaixo da média: %d\n", dias_abaixo_media);
    
    return 0;
}

void ler_temperaturas(float temperaturas[]) {
    // pede para o usuário digitar as temperaturas de cada dia de janeiro
    for (int i = 0; i < 31; i++) {
        printf("Digite a temperatura do dia %d (em graus Celsius): ", i+1);
        scanf("%f", &temperaturas[i]);
        
        // verifica se a temperatura está dentro do intervalo permitido
        while (temperaturas[i] < 15 || temperaturas[i] > 40) {
            printf("Digite uma temperatura entre 15 e 40 graus Celsius para o dia %d: ", i+1);
            scanf("%f", &temperaturas[i]);
        }
    }
}

float menor_temperatura(float temperaturas[]) {
    // calcula a menor temperatura ocorrida
    float menor_temp = temperaturas[0];
    for (int i = 1; i < 31; i++) {
        if (temperaturas[i] < menor_temp) {
            menor_temp = temperaturas[i];
        }
    }
    return menor_temp;
}

float maior_temperatura(float temperaturas[]) {
    // calcula a maior temperatura ocorrida
    float maior_temp = temperaturas[0];
    for (int i = 1; i < 31; i++) {
        if (temperaturas[i] > maior_temp) {
            maior_temp = temperaturas[i];
        }
    }
    return maior_temp;
}

float temperatura_media(float temperaturas[]) {
    // calcula a temperatura média
    float media_temp = 0;
    for (int i = 0; i < 31; i++) {
        media_temp += temperaturas[i];
    }
    media_temp /= 31;
    return media_temp;
}

int dias_abaixo_da_media(float temperaturas[], float media) {
    // conta o número de dias em que a temperatura foi inferior à temperatura média
    int dias_abaixo_media = 0;
    for (int i = 0; i < 31; i++) {
        if (temperaturas[i] < media) {
            dias_abaixo_media++;
        }
    }
    return dias_abaixo_media;
}
