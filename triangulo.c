#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int base, altura, area;
    printf("digite o valor da base:");
    scanf("%i", &base);

    printf("digite o valor da altura:");
    scanf("%i", &altura);

    area = (base*altura)/2;


    printf("a area do triangulo e: %i", area);




    return 0;
}
