#include<stdio.h>

#include<stdlib.h>

#include<conio.h>




//Função principal do programa

int main(int argc, char const *argv[])

{

// Declaração das variáveis

int fn, f1=0, f2=1;


printf("Exibir os 30 numeros de fibonacci");



printf("\nPressione qualquer tecla para iniciar: ");

fn = getch();



for(int i=0; i<30; i++){

fn=f1+f2;

printf("\n%i",fn);

f1=f2;

f2=fn;

}

{
    printf("Vielen Danke!");
}


return 0;

}