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


    if ((lado1*lado1)+(lado2*lado2)== lado3*lado3 || (lado1*lado1)+(lado3*lado3)== lado2*lado2 || (lado2*lado2)+(lado3*lado3)== lado1*lado1) {
     printf("triangulo retangulo:");
    }
   
    else{
    printf("nao e triangulo retangulo") ;    
    }

   


    return 0;
}
