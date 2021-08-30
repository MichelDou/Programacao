#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float  lado1, lado2, lado3;
    printf("digite o lado1 do triangulo:");
    scanf("%f", &lado1);

    printf("digite o lado2 do triangulo:");
    scanf("%f", &lado2);

    printf("digite o lado3 do triangulo:");
    scanf("%f", &lado3);


    if (lado1==lado2 && lado1==lado3){
     printf("triangulo equilatero:");
    }
    else if (lado1==lado2 && lado1!=lado3){
    printf("triangulo isoceles") ;
    }
    else{
    printf("triangulo escaleno") ;    
    }

   


    return 0;
}
