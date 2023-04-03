#include <stdio.h>
#include <stdlib.h>
//sistema para calcular o números de horas trabalhadas e o valor do salario minimo indicando o valor /hora trabalhada, salario bruto, imposto sobre o salario e o salario liquido

int main() {
  //indico as variaveis que irei usar para o sistema por meio do float
    float Horas_trabalhadas, Salario_minimo, Valor_hora, Salario_bruto, Imposto, Salario_liquido;
//Solicito ao usuario q digite suas horas trabalhadas e o salario minimo pelo scanf
    printf("Digite o numero de horas trabalhadas: ");
    scanf("%f", &Horas_trabalhadas);

    printf("Digite o valor do salario mínimo: ");
    scanf("%f", &Salario_minimo);

    Valor_hora = Salario_minimo / 10.0;
    Salario_bruto = Horas_trabalhadas * Valor_hora;
    Imposto = Salario_bruto * 0.05;
    Salario_liquido = Salario_bruto - Imposto;
//indicação do valor da hora trabalhada, salario bruto, imposto e salario liquido
    printf("Valor da hora trabalhada: R$ %.2f\n", Valor_hora);
    printf("Salario bruto: R$ %.2f\n", Salario_bruto);
    printf("Imposto: R$ %.2f\n", Imposto);
    printf("Salario liquido: R$ %.2f\n", Salario_liquido);

}
