#include<stdio.h>
#include<stdlib.h>

//Função principal do programa
int main(int argc, char const *argv[])
{


int numeros[2][3];


printf("mostrar 6 valores em matriz de duas colunas");

printf("\nDigite os 6 numeros:\n");
for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
    scanf("%i", &numeros[i][j]);
    }
}
printf("Os numeros digitados foram:\n");
for(int i=0; i<2; i++){
    for(int j=0; j<3; j++){
    printf("%i ", numeros[i][j]);
    }
printf("\n");
}

return 0;
}