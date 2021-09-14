#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float  p1, p2, media, result;
    printf("digite a nota tirada na p1:");
    scanf("%f", &p1);
   
    printf("digite a nota tirada na p2:");
    scanf("%f", &p2);

    media=((p1+p2)/3);


    if (media>=5){
     printf("voce esta aprovado: \n %.2f", media);
    }
   
    
    else {
    printf("burrinho! vai pra p3: \n %.2f", media);   
    }

   


    return 0;
}
