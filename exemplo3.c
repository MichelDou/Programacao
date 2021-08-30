#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int lado1, lado2, area;
    printf("digite o valor do lado1:");
    scanf("%i", &lado1);

    printf("digite o valor do lado2:");
    scanf("%i", &lado2);

    area = lado1*lado2;


    printf("a area e: %i", area);




    return 0;
}
