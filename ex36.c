
//Função principal do programa
int main(int argc, char const *argv[])
{


//Declaração 
int con;


printf("Colocar 20 valores e após isso colocar o numero a ser multiplicado");

//Declarando dos vetores
int valor1[20];
int valor2[20];

//Looping de numeros
printf("\nDigite 20 numeros:\n");
for (int i=0; i<20; i++){
    scanf("%i", &valor1[i]);
}
printf("Digite o valor da constante: ");
scanf("%i", &con);


printf("\nExibindo vetor 1:\n");
for (int i=0; i<20; i++){
    printf("%i\n",valor1[i]);
}

printf("\nResultado no vetor 2:\n");
for (int i=0; i<20; i++){ 
    valor2[i] = con * valor1[i]; 
    printf("%i\n",valor2[i]);  
    printf("vielen danke");
}
return 0;
}