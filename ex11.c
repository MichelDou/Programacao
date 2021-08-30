#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    float valor1,valor2;
    printf("digite o valor1: ");
    scanf("%f", &valor1);


    printf("digite o valor2: ");
    scanf("%f", &valor2);


     if(valor1 == valor2)
    {
    printf("numeros identicos "); 
    
    
    }
    else if(valor1>valor2){
    printf("valor 1 e o maior:\n %.f", valor1);  
    
    }
    
    else{

    printf("valor 2 e o maior:\n %.f", valor2);

    }

    return 0;
}
