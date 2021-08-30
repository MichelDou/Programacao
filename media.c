#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int nota1, nota2, nota3, nota4, media;
    printf("digite o valor danota1:");
    scanf("%i", &nota1);

    printf("digite o valor da nota2");
    scanf("%i", &nota2);

    printf("digite o valor da nota3");
    scanf("%i", &nota3);

    printf("digite o valor da nota4");
    scanf("%i", &nota4);

   media = (nota1 + nota2 + nota3 + nota4)/4;


    printf("a media e: %i", media);




    return 0;
}
