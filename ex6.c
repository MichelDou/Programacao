#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float dolar, reais, cotacao;
    printf("digite o valor  da cotacao: ");
    scanf("%f", &cotacao);

    

    printf("digite a quantidade de dolar: ");
    scanf("%f", &dolar);


    reais = cotacao * dolar;


    printf(" o resultado da cotacao em reais e: %.2f", reais);




    return 0;
}
