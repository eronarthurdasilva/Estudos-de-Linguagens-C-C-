#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_VEICULOS 100

typedef struct {
  int dia;
  int mes;
  int ano;
  int hora;
  int minuto;
} Data;

typedef struct {
  int codigo;
  char placa[8];
  char modelo[31];
  Data entrada;
  Data saida;
  float valorPago;
} Veiculo;

void cadastrarVeiculos(Veiculo veiculos[], int *numVeiculos) {
  if (*numVeiculos >= MAX_VEICULOS) {
    printf("\nLimite máximo de veículos atingido.\n");
    return;
  }

  Veiculo veiculo;

  printf("Placa: ");
  scanf("%s", veiculo.placa);

  printf("Modelo: ");
  scanf(" %[^\n]s", veiculo.modelo);

  printf("Data e hora de entrada (dia mes ano hora minuto): ");
  scanf("%d %d %d %d %d", &veiculo.entrada.dia, &veiculo.entrada.mes,
        &veiculo.entrada.ano, &veiculo.entrada.hora, &veiculo.entrada.minuto);

  printf("Data e hora de saída (dia mes ano hora minuto): ");
  scanf("%d %d %d %d %d", &veiculo.saida.dia, &veiculo.saida.mes,
        &veiculo.saida.ano, &veiculo.saida.hora, &veiculo.saida.minuto);

  veiculo.codigo = *numVeiculos + 1;
  veiculo.valorPago =
      1.0 * ((veiculo.saida.ano - veiculo.entrada.ano) * 365 * 24 +
             (veiculo.saida.mes - veiculo.entrada.mes) * 30 * 24 +
             (veiculo.saida.dia - veiculo.entrada.dia) * 24 +
             (veiculo.saida.hora - veiculo.entrada.hora) +
             (veiculo.saida.minuto - veiculo.entrada.minuto) / 60);

  veiculos[*numVeiculos] = veiculo;

  (*numVeiculos)++;

  printf("\nVeículo cadastrado com sucesso.\n");
  printf("--------------------------------------------------------\n");
}

void listarVeiculos(Veiculo veiculos[], int numVeiculos) {
  if (numVeiculos == 0) {
    printf("Nenhum veículo cadastrado.\n");
    printf("--------------------------------------------------------\n");
    return;
  }

  printf("Veículos cadastrados:\n");
  for (int i = 0; i < numVeiculos; i++) {
    printf("Código: %d\n", veiculos[i].codigo);
    printf("Placa: %s\n", veiculos[i].placa);
    printf("Modelo: %s\n", veiculos[i].modelo);
    printf("Entrada: %02d/%02d/%04d %02d:%02d\n", veiculos[i].entrada.dia,
           veiculos[i].entrada.mes, veiculos[i].entrada.ano,
           veiculos[i].entrada.hora, veiculos[i].entrada.minuto);
    printf("Saída: %02d/%02d/%04d %02d:%02d\n", veiculos[i].saida.dia,
           veiculos[i].saida.mes, veiculos[i].saida.ano, veiculos[i].saida.hora,
           veiculos[i].saida.minuto);
    printf("Valor pago: R$ %.2f\n", veiculos[i].valorPago);
    printf("--------------------------------------------------------\n");
  }
  printf("\n");
}

void alterarVeiculo(Veiculo veiculos[], int numVeiculos) {
  char placa[8];

  printf("Digite a placa do veículo que deseja alterar: ");
  scanf("%s", placa);

  for (int i = 0; i < numVeiculos; i++) {
    if (strcmp(veiculos[i].placa, placa) == 0) {
      printf("\nPlaca encontrada. Informe os novos dados:\n");

      printf("Novo modelo: ");
      scanfscanf(" %[^\n]s", veiculos[i].modelo);

      printf("Nova data e hora de entrada (dia mes ano hora minuto): ");
      scanf("%d %d %d %d %d", &veiculos[i].entrada.dia,
            &veiculos[i].entrada.mes, &veiculos[i].entrada.ano,
            &veiculos[i].entrada.hora, &veiculos[i].entrada.minuto);

      printf("Nova data e hora de saída (dia mes ano hora minuto): ");
      scanf("%d %d %d %d %d", &veiculos[i].saida.dia, &veiculos[i].saida.mes,
            &veiculos[i].saida.ano, &veiculos[i].saida.hora,
            &veiculos[i].saida.minuto);

      veiculos[i].valorPago =
          1.0 * ((veiculos[i].saida.ano - veiculos[i].entrada.ano) * 365 * 24 +
                 (veiculos[i].saida.mes - veiculos[i].entrada.mes) * 30 * 24 +
                 (veiculos[i].saida.dia - veiculos[i].entrada.dia) * 24 +
                 (veiculos[i].saida.hora - veiculos[i].entrada.hora) +
                 (veiculos[i].saida.minuto - veiculos[i].entrada.minuto) / 60);

      printf("Veículo alterado com sucesso.\n");
      printf("--------------------------------------------------------\n");
      return;
    }
  }

  printf("Veículo com placa %s não encontrado.\n", placa);
  printf("--------------------------------------------------------\n");
}

void pesquisarPorPlaca(Veiculo veiculos[], int numVeiculos) {
  char placa[8];

  printf("Digite a placa do veículo que deseja pesquisar: ");
  scanf("%s", placa);

  for (int i = 0; i < numVeiculos; i++) {
    if (strcmp(veiculos[i].placa, placa) == 0) {
      printf("Veículo encontrado:\n");
      printf("--------------------------------------------------------\n");
      printf("Código: %d\n", veiculos[i].codigo);
      printf("Placa: %s\n", veiculos[i].placa);
      printf("Modelo: %s\n", veiculos[i].modelo);
      printf("Entrada: %02d/%02d/%04d %02d:%02d\n", veiculos[i].entrada.dia,
             veiculos[i].entrada.mes, veiculos[i].entrada.ano,
             veiculos[i].entrada.hora, veiculos[i].entrada.minuto);
      printf("Saída: %02d/%02d/%04d %02d:%02d\n", veiculos[i].saida.dia,
             veiculos[i].saida.mes, veiculos[i].saida.ano,
             veiculos[i].saida.hora, veiculos[i].saida.minuto);
      printf("Valor pago: R$ %.2f\n", veiculos[i].valorPago);
      printf("--------------------------------------------------------\n");
      return;
    }
  }

  printf("Veículo com placa %s não encontrado.\n", placa);
  printf("--------------------------------------------------------\n");
}

void pesquisarPorModelo(Veiculo veiculos[], int numVeiculos) {
  char modelo[31];

  printf("Digite o modelo do veículo que deseja pesquisar: ");
  scanf(" %[^\n]s", modelo);

  int encontrado = 0;

  printf("Veículos encontrados com o modelo %s:\n", modelo);
  printf("--------------------------------------------------------\n");
  for (int i = 0; i < numVeiculos; i++) {
    if (strcmp(veiculos[i].modelo, modelo) == 0) {
      printf("Código: %d\n", veiculos[i].codigo);
      printf("Placa: %s\n", veiculos[i].placa);
      printf("Modelo: %s\n", veiculos[i].modelo);
      printf("Entrada: %02d/%02d/%04d %02d:%02d\n", veiculos[i].entrada.dia,
             veiculos[i].entrada.mes, veiculos[i].entrada.ano,
             veiculos[i].entrada.hora, veiculos[i].entrada.minuto);
      printf("Saída: %02d/%02d/%04d %02d:%02d\n", veiculos[i].saida.dia,
             veiculos[i].saida.mes, veiculos[i].saida.ano,
             veiculos[i].saida.hora, veiculos[i].saida.minuto);
      printf("Valor pago: R$ %.2f\n", veiculos[i].valorPago);
      printf("--------------------------------------------------------\n");
      encontrado = 1;
    }
  }

  if (!encontrado) {
    printf("Nenhum veículo com o modelo %s encontrado.\n", modelo);
    printf("--------------------------------------------------------\n");
  }
}

void listaPorData(Veiculo veiculos[], int numVeiculos) {
  Data dataInicial, dataFinal;

  printf("Digite a data inicial (dia mes ano hora minuto): ");
  scanf("%d %d %d %d %d", &dataInicial.dia, &dataInicial.mes, &dataInicial.ano,
        &dataInicial.hora, &dataInicial.minuto);

  printf("Digite a data final (dia mes ano hora minuto): ");
  scanf("%d %d %d %d %d", &dataFinal.dia, &dataFinal.mes, &dataFinal.ano,
        &dataFinal.hora, &dataFinal.minuto);

  int encontrado = 0;

  printf("Veículos com data de saída entre %02d/%02d/%04d %02d:%02d e "
         "%02d/%02d/%04d %02d:%02d:\n",
         dataInicial.dia, dataInicial.mes, dataInicial.ano, dataInicial.hora,
         dataInicial.minuto, dataFinal.dia, dataFinal.mes, dataFinal.ano,
         dataFinal.hora, dataFinal.minuto);
  printf("--------------------------------------------------------\n");
  for (int i = 0; i < numVeiculos; i++) {
    if (compareData(veiculos[i].saida, dataInicial) >= 0 &&
        compareData(veiculos[i].saida, dataFinal) <= 0) {
      printf("Código: %d\n", veiculos[i].codigo);
      printf("Placa: %s\n", veiculos[i].placa);
      printf("Modelo: %s\n", veiculos[i].modelo);
      printf("Entrada: %02d/%02d/%04d %02d:%02d\n", veiculos[i].entrada.dia,
             veiculos[i].entrada.mes, veiculos[i].entrada.ano,
             veiculos[i].entrada.hora, veiculos[i].entrada.minuto);
      printf("Saída: %02d/%02d/%04d %02d:%02d\n", veiculos[i].saida.dia,
             veiculos[i].saida.mes, veiculos[i].saida.ano,
             veiculos[i].saida.hora, veiculos[i].saida.minuto);
      printf("Valor pago: R$ %.2f\n", veiculos[i].valorPago);
      printf("--------------------------------------------------------\n");
      encontrado = 1;
    }
  }

  if (!encontrado) {
    printf("Nenhum veículo encontrado nesse período.\n");
    printf("--------------------------------------------------------\n");
  }
}

void backupDados(Veiculo veiculos[], int numVeiculos) {
  char nomeArquivo[50];

  printf("Digite o nome do arquivo para backup: ");
  scanf("%s", nomeArquivo);

  FILE *arquivo = fopen(nomeArquivo, "wb");
  if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    printf("--------------------------------------------------------\n");
    return;
  }

  fwrite(veiculos, sizeof(Veiculo), numVeiculos, arquivo);

  fclose(arquivo);

  printf("Backup realizado com sucesso.\n");
  printf("--------------------------------------------------------\n");
}

void restaurarDados(Veiculo veiculos[], int *numVeiculos) {
  char nomeArquivo[50];

  printf("Digite o nome do arquivo para restauração: ");
  scanf("%s", nomeArquivo);

  FILE *arquivo = fopen(nomeArquivo, "rb");
  if (arquivo == NULL) {
    printf("Erro ao abrir o arquivo.\n");
    printf("--------------------------------------------------------\n");
    return;
  }

  *numVeiculos = fread(veiculos, sizeof(Veiculo), MAX_VEICULOS, arquivo);

  fclose(arquivo);

  printf("Restauração realizada com sucesso.\n");
  printf("--------------------------------------------------------\n");
}

int compareData(Data data1, Data data2) {
  if (data1.ano != data2.ano) {
    return data1.ano - data2.ano;
  }
  if (data1.mes != data2.mes) {
    return data1.mes - data2.mes;
  }
  if (data1.dia != data2.dia) {
    return data1.dia - data2.dia;
  }
  if (data1.hora != data2.hora) {
    return data1.hora - data2.hora;
  }
  return data1.minuto - data2.minuto;
}

int main() {
  Veiculo veiculos[MAX_VEICULOS];
  int numVeiculos = 0;
  int opcao;

  do {
    printf("\t\t\tMENU\n");
    printf("\ta) Cadastrar Veículos\n");
    printf("\tb) Listar Veículos\n");
    printf("\tc) Alterar Veículos\n");
    printf("\td) Pesquisar por Placa\n");
    printf("\te) Pesquisar por Modelo\n");
    printf("\tf) Lista por Data\n");
    printf("\tg) Backup dos dados em Arquivo Binário\n");
    printf("\th) Restauração de dados de Arquivo Binário\n");
    printf("\tx) Sair\n");

    printf("\n\tEscolha uma opção: ");
    scanf("%c", &opcao);

    printf("\n-----------------------------------------------------\n");

    switch (opcao) {
    case 'a':
      printf("\n");
      cadastrarVeiculos(veiculos, &numVeiculos);
      break;
    case 'b':
      printf("\n");
      listarVeiculos(veiculos, numVeiculos);
      break;
    case 'c':
      printf("\n");
      alterarVeiculo(veiculos, numVeiculos);
      break;
    case 'd':
      printf("\n");
      pesquisarPorPlaca(veiculos, numVeiculos);
      break;
    case 'e':
      printf("\n");
      pesquisarPorModelo(veiculos, numVeiculos);
      break;
    case 'f':
      printf("\n");
      listaPorData(veiculos, numVeiculos);
      break;
    case 'g':
      printf("\n");
      backupDados(veiculos, numVeiculos);
      break;
    case 'h':
      printf("\n");
      restaurarDados(veiculos, &numVeiculos);
      break;
    case 'x':
      printf("\n");
      printf("Encerrando o programa...\n");
      break;
    default:
      printf("\n");
      printf("Opção inválida. Tente novamente...\n");
      printf("\n-----------------------------------------------------\n");
      break;
    }
  } while (opcao != 'x');

  return 0;
}