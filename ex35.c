#include <stdio.h>
 
int main(int argc, char *argv[]){
  int *numeros;
  int qtd;
  int cont;
  int result;
 
  printf("Digite a quantidade de numeros: ");
  scanf("%i", &qtd);
  
  printf("digite a constante:");
  scanf("%i", &cont);

  // O malloc reserva 100 blocos na memória e o ponteiro "numeros" aponta pra lá
  numeros = (int*)malloc(qtd*sizeof(int));

   printf("Digite os numeros: ");
  for(int  i=0; i<qtd;i*cont, i++){
      scanf("%i", &numeros[i]);
  }


  printf("Os numeros digitados foram com resultado sao: ");
  for(int  i=0; i<qtd;i*cont, i++){
   printf("%i \n", numeros[i]);
  }



  return 0;
}

