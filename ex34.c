#include <stdio.h>
 
int main(int argc, char *argv[]){
  //int numeros[5] = {4, 5, 7, 10, 18};
  int numeros[5];
  int maior=0;
  int menor=0;
 // int menor = numeros[5];


  printf("Digite os 10 numeros: ");
  for(int i=0; i<5; i++){
   if (numeros[i]==0) maior = numeros[i];
    if (numeros[i] > maior) maior = numeros[i];

      scanf("%i", &numeros[5]);
  }




{
  printf("o maior numero é o : ");
      printf("%i", maior);
  }
  

  return 0;
}
