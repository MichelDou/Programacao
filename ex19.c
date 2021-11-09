#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    float  acelera, veloini, tper, velofinal;
    printf("digite a aceleracao do inicial:");
    scanf("%f", &acelera);

    printf("digite a velocidade inicial:");
    scanf("%f", &veloini);

    printf("digite o tempo do percurso:");
    scanf("%f", &tper);
  
    velofinal=veloini+acelera*tper;

    if (velofinal<=40){
     printf("veiculo muito lento \n %.f", velofinal);
    }
    else if (40<=velofinal<=60){
    printf("velocidade permitida \n %.f", velofinal) ;
    }
    else if (60<velofinal<=80){
    printf("velocidade de cruzeiro \n%.f", velofinal) ;    
    }
    else if (80<velofinal<=120){
    printf("veiculo rapido \n%.f",velofinal);   
    }
    else {
    printf("veiculo mjuito rapido \n %.f", velofinal);   
    }

   


    return 0;
}
