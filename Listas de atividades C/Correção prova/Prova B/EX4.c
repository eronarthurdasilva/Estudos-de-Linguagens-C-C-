#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
   int n,i,j;
   printf("Digite um numero: ");
   scanf("%d",&n);
   for(i=1;i<=n;i++){
       printf("\n");
    for(j=1;j<=i;j++){
        printf("*");
    }
   }
   return 0;
}
