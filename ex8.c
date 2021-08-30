#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    float peso,altura,imc;
    printf("digite o valor  do peso: ");
    scanf("%f", &peso);


    printf("digite o valor  da altura: ");
    scanf("%f", &altura);


    imc = peso/(altura*altura);


    printf(" o valor do seu imc e: %.2f", imc);




    return 0;
}
