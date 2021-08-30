#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float peso, altura, imc;
    printf("digite o seu peso:");
    scanf("%f", &peso);

    printf("digite o valor da altura:");
    scanf("%f", &altura);

    imc = peso/ (altura*altura);

    if (imc<20){
     printf("abaixo do peso:");
     
    }
    else if (imc<25){
    printf("peso ideal") ;

    }
    else{
    printf("acima do peso") ;    
    }

   


    return 0;
}
