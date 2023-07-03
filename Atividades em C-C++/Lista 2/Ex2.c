#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declarando as variaveis
    int senha=1234;
    //Solicitada ao usuario a senha
    printf("Digite a sua senha\n");
    //salvando a variavel
    scanf("%d", &senha);
    //caso a senha for diferente de 1234 ira aparecer acesso negado.
    if(senha!=1234)
        printf("----Acesso negado----");
    //casom não seja diferente ira aparecer acesso permitido.
    else
        printf("----Acesso permitido----");
    return 0;
}
