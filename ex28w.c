#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[]){
 int numero, i, r;

printf("digite um numero positivo:");
scanf("%i", &numero);


while (numero<=0){

printf("Erro, caractere errado! digite o sexo novamente:");
scanf("%i", &numero);

}

i=0;

while(i<=20){
r=numero*i;  
printf("%i x %i = %i\n", numero, i, r);
printf("pressione qualquer tecla para continuar...\n");
getch();
i=i+1;
}








{
    printf("Vielen Danke!");
}



return 0;
}
