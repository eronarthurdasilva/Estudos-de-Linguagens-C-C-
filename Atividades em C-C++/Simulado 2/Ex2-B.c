void misterio1(int vet[5], int * x) {
 *x = vet[0];//atribui a x o valor que sta na posição 0 do vetor vet
 for (int i=0;i<5;i++)//estrutura de repetição ate i ser maior ou igual a 5
 if (vet[i] < *x)//condição que verifica em cada posição o valor que esta e menor que valor de x
 *x = vet[i];//caso seja atribiu a x o valor que esta na posição
}
int misterio2(int vet[5]) {
 int p = vet[0];//atribui a p o valor que sta na posição 0 do vetor vet
 for (int i=0;i<5;i++)//estrutura de repetição ate i ser maior ou igual a 5
 if (vet[i] > p)//condição que verifica em cada posição o valor que esta e maior que valor de p
 p = vet[i];//caso seja atribiu a p o valor que esta na posição
 return p;//retorna valor de P
}
int main()
{
 int k[] = {4, 7, 1, 4, 8};
 int x = misterio2(k), y;
 misterio1(k, &y);
 printf("%d %d", x, y);
}