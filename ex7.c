#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    
    float a, b, c, d, e, pagamento, result, total;
    printf("digite o valor  do produto a: ");
    scanf("%f", &a);

    printf("digite o valor  do produto b: ");
    scanf("%f", &b);

    printf("digite o valor  do produto c: ");
    scanf("%f", &c);

    printf("digite o valor  do produto d: ");
    scanf("%f", &d);

    printf("digite o valor  do produto e: ");
    scanf("%f", &e);

    printf("digite o valor  do pagamento: ");
    scanf("%f", &pagamento);

    result = (a+b+c+d+e);
    total= pagamento-result;


    printf("o troco da sua compra e: %.2f", total);




    return 0;
}
