#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float peso, altura, imcm,imcf, m, f;
    char sexo;
    printf("digite o seu peso:");
    scanf("%f", &peso);

    printf("digite o valor da altura:");
    scanf("%f", &altura);

    printf("digite o sexo da pessoa:");
    scanf("%s", &sexo);

   { imcm = peso/ (altura*altura)+m;
    
    if (imcm<20){
     printf("abaixo do peso:");
     
    }
    else if(imcm<25){
    printf("peso ideal") ;

    }}
    //else{
   // printf("acima do peso") ;    
  //  }}
    

  {  imcf = peso/ (altura*altura)+f;
    
    if (imcf<19){
     printf("abaixo do peso:");
     
    }
    else if(imcf<24){
    printf("peso ideal") ;
    }
    else{
    printf("acima do peso") ;    
    }}
    


    return 0;
}
