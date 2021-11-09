#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
 int numero, i, r,B;

printf("digite um numero positivo:");
scanf("%i", &numero);


while (numero<=0){

printf("Erro, caractere errado! digite o numero novamente:");
scanf("%i", &numero);

}

printf("digite o intervalo da tabuada:");
scanf("%i", &B);


while (B<=numero){

printf("Erro, caractere errado! digite o segundo numero novamente:");
scanf("%i", &B);
}


for (i=B;i<=10;i=i+B){
r=numero*i;
printf("%i x %i = %i\n", numero, i, r);

}



{
    printf("Vielen Danke!");
}



return 0;
}