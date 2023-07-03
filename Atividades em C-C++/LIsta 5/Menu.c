/*Menu de resolução de atividades */
#include <stdio.h>
#include <stdlib.h>
#include <math.h> // Biblioteca para trabalhar com operações matemáticas avançadas
#include <stdbool.h> // Biblioteca para trabalhar com valores booleanos em C
#include <time.h>// Biblioteca para o uso da função srand()
/*EX1
  Descrição: Função para fornecer o triplo do valor proposto pelo usuário
  Paramêtros: Números inteiros (int num)
  Retorna: Número inteiro ao cubo
*/
int Triplo (int num){
  return pow(num, 3);
}

/*Ex2
  Descrição: Função que recebe 5 números do usuário e forneça a ele a media
  Paramêtros: Números em float (floa num)
  Retorna: Número em Float
*/
int media (float num){
  return num/5;
}

/*
  Ex3
  Discrição:Procedimento para solicitar um numero inteiro para o usario
  e fornecer os numeros primos de 1 ate o n
  Paramêtros:nulo
  Retorna:nulo
*/
void ehprimo (void){
  int primo;
  int n;
  printf("Digite um numero: ");
  scanf("%d", &n);
  for (int i=1; i<=n; i++){
    for (int j=1; j<n/2; j++){
      if (i%j==0){
        primo=0;
      }
      else
        primo=1;
    }
    if(primo>0){
      printf("\nOs números primos: %d", i);
  }
}
}

/*
 Ex4
 Descrição: Procedimento para encontrar o maximo e o minimo;
 Parametros: nulo
 Retorno: nulo
*/
void minmax (void){
  float num =0, maior1 =0, menor1 =0;
  int i =1;
  do{
    printf("\nDigite Numero(Caso queira sair Digite valores menores que 0): ");
    scanf("%f", &num);
    if(i==1){
      menor1=num;
    }
    
    else if(num>menor1){
      menor1=num;
    }
    else if(num<menor1){
      maior1=num;
    }
  }
  while(num!=0);
  printf("\n Maximo e: %.2f", maior1);
  printf("\n Minimo e: %.2f",  menor1);
  
}

/*
    Ex5
    Descrição:Função para receber o raio da circuferencia
    Paramêtros: Numeros em Float
    Retorno: em Float
*/
//Função do Diametro do circulo
float diametro (float r){
    return r*2;
}
//Função da Circuferencia do Circulo
float circuferencia (float r){
    return 3.14*r*2;
}
//Função da área do circulo
float area (float r){
   return 3.14*pow(r,2);
}
/*
  Ex6
  Descrição: Função para receber 3 valores booleanos 
  Paramêtros: Booleana A, B, C
  Retorna: Retorna uma função de valor booleano
*/
bool op_booleana (bool A, bool B, bool C) {
    // Aplicando a negação em A
    A = !A;
    // Aplicando a disjunção inclusiva entre A e B
    bool resultado1 = A || B;
    // Aplicando a conjunção entre resultado1 e C
    bool resultado_final = resultado1 && C;
    // Retornando o resultado
    return resultado_final;
}

/*Ex7
  Descrição: Função que demostra o k-ésimo termo do número digitado pelo usuário
  Paramêtros: Inteiro nùmero 
  Retorna: Número ineiro como o k-ésimo termo digitado
*/
int kesimo (int numero, int k){
    //Condição caso o número seja menor que zero
    if (numero<=0){
           return -1;
    }
    //Estrutua sequencial para descobri o K-ésimo número solicitado
    else{
        for (int i=1; i<=k; i++){
        numero/=10;
        }
        return numero;
    }
}

/*Ex8
  Descrição: Procedimento  para receber 3 números interios inteiros e mostra
  o limite inferior, limite superior e o valor incrementado;
  Paramêtros: Interios inferior, superior e incremento;
  Retorna: Retorna referencial
*/
void limites (int superior, int inferior, int incremento){
    //Condição caso o valor inferior for maior que o superior
    if(inferior > superior){
        printf("Erro: Valor inferior maior que o valor superior\n");
        return;//retorna sem dar errom 
    }
    //Condição caso a condição de cima seja falsa ira entra em um for, retornando o resultado
    else
        for (int i= inferior; i <= superior; i += incremento){
        printf("\n%d\n", i);
    }

}

/*Ex9
  Descrição:Função que calcula a somatoria de S
  Paramêtros: double Soma, inteiros numerador e denominador.
  Retorno: Retorna em soma total em double
*/
double Calcula_Soma_total (){
    double soma_total = 0.0;//soma total vira um número real
    int numerador = 1, denominador = 225, decrementacao_denominador = 29;//Valores iniciais da somatoria e decrementação;
    //Estrutura sequencial while, onde equanto o denominador for maior ou igual a 1 ele ira executar
    while (denominador>=1){
        soma_total += (double) numerador / denominador;
        numerador *=2;
        denominador = denominador - decrementacao_denominador;
        decrementacao_denominador -=2;
    }
    return soma_total;

}

/*Ex10
  Descrição:Função que calcula a soma da distancia de Manhattan entre um ponto p 
  e pontos aleatórios 
  Paramêtros: int x, int y, int n
  Retorno: int
*/
int distancia_de_Manhat(int x, int y, int n){
    int dist=x-y;
    dist = abs(dist);
    int SomaDaDistancia=dist;
    srand(time(NULL));
    for(int i=1;i<=n;i++){
        int xRandom = rand()%10+1;
        int yRandom =rand()%10+1;
        int difRandom= xRandom-yRandom;
        difRandom=abs(difRandom);
        SomaDaDistancia+=difRandom;
        printf("\nPonto %d eh (%d,%d), distancia ate ele eh %d",i,xRandom,yRandom,dist+difRandom);
    }
    return SomaDaDistancia;

}
/*Ex11
  Descrição:  Função que recebe 3 coeficientes do usuário e retorna o valor de delta  
  Paramêtros: Float ax, Float bx, FLoat c;
  Retorno: Float
*/
float Delta (float ax, float bx, float c){
    return pow (bx,2) - 4 * ax * c;
}
 
int main (void){
  int opcao;
    do{
        printf("\n\nLista de Exercicio");
        printf("\n(1) Cubo do numero");
        printf("\n(2) Media dos numeros");
        printf("\n(3) Numeros primos");
        printf("\n(4) Maximo e minimo");
        printf("\n(5) Circulo");
        printf("\n(6) Valor verdade");
        printf("\n(7) K-esimo digito da direita para esquerda");
        printf("\n(8) Incrementacao entre limites");
        printf("\n(9) Somatorio");
        printf("\n(10) Distancia de Manhattan");
        printf("\n(11) Valor de delta");
        printf("\n(0) Sair");
        printf("\n(0) Selecionar o exercicio desejado: ");
        scanf("%d",&opcao);
        fflush(stdin);
        switch(opcao){
            case (1):
            {
                float n;
                printf("\nPrograma para encontrar o cubo de um numero\nFavor digitar um numero: ");
                scanf("%f",&n);
                printf("\nO cubo do numero %.2f eh %.2d", n, Triplo (n));
                break;
            }
            case(2):
            {
                int n,soma=0;
                printf("\nPrograma para realizar a media de 5 numeros\n");
                for(int i=1;i<=5;i++){
                    printf("Favor digitar o numero: ");
                    scanf("%d",&n);
                    soma+=n;
                }
                printf("\nA media dos numeros eh %d", media (soma));
                break;
            }
            case(3):
            {
                ehprimo();
                break;
            }
            case (4):
            {
                printf("\nPrograma Maximo e Minimo\n");
                minmax();
                break;
            }
            case(5):
            {
                float raio;
                printf("\nPrograma circulo\nFavor digitar o valor do raio: ");
                scanf("%f",&raio);
                printf("\nO diametro eh %f \nA circumferencia eh %f \nA area eh %f", diametro (raio), circuferencia (raio), area(raio));
                break;
            }
            case (6):
            {
                int a,b,c;
                printf("\nDigite o valor booleano para A,B e C(Utilize 1 para Verdadeiro e 0 para falso):\n");
                scanf("%d %d %d",&a,&b,&c);
                printf("\nO valor verdade da expressao ~A V B & C eh ");
                if (op_booleana(a,b,c)==1)
                    printf("verdadeiro");
                else
                    printf("falso");
                break;
            }
            case (7):
            {
                int n,k;
                printf ("\nDigitar um numero e a posicao do digito desejado: ");
                scanf("%d %d",&n,&k);
                if(k<=0 || k>n){
                    printf("\nValor invalido");
                }
                else
                    printf("\nO %do digito desejado (da direita para esquerda) do numero %d eh %d", k, n, kesimo(n,k));
                break;
            }
            case(8):
            {
                int limiteInf,limiteSup,increment;
                printf("\nFavor digitar o limite inferior, superior e o valor de incrementacao:\n");
                scanf("%d %d %d",&limiteInf,&limiteSup,&increment);
                limites(limiteInf,limiteSup,increment);
                break;
            }
            case (9):
                printf("\nO resultado da soma eh %.2f", Calcula_Soma_total());
                break;

            case (10):
            {
                int x,y,n;
                printf("\nFavor digitar os valores x e y do ponto desejado: ");
                scanf("%d %d",&x,&y);
                printf("\nFavor digitar quantos pontos aleatórios devem ser criados: ");
                scanf("%d",&n);
                printf("\n\nA soma da distancia do ponto (%d,%d) para %d pontos aleatorios eh %d",x,y,n, distancia_de_Manhat(x,y,n));
                break;
            }
            case (11):
            {
                float a,b,c;
                printf("\nFavor digitar o valor de A,B,C: ");
                scanf("%f %f %f",&a,&b,&c);
                printf("\nO valor de delta eh %.2f", Delta(a,b,c));
                break;
            }
            case (0):
                printf("\nPrograma encerrado");
                break;

            default:
                printf("\nOpcao invalida");
                break;
        }
    }
    while(opcao>0);
    printf("\nPrograma encerrado, Ate logo");
    return 0;
}
    
