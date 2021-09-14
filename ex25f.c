#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
 int numero, i, r;

printf("digite o numero 5 para exibir a tabuada:");
scanf("%i", &numero);


while (numero!=5){

printf("Erro, caractere errado! digite o sexo novamente:");
scanf("%i", &numero);

}


for(int i=2; i<=10; i=i+2 ){
r=numero*i;
printf("%i x %i = %i\n", numero, i, r);

}



{
    printf("Vielen Danke!");
}



return 0;
}