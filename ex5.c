#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int celsius, fahreheit;
    printf("digite o valor  em graus celsius");
    scanf("%i", &celsius);


    fahreheit= (celsius * 9/5)+32;


    printf(" o resultado em fahreheit é: %i", fahreheit);




    return 0;
}
