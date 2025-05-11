
#include <stdio.h>

int main(){

    int C1, quant;
    float total, preco;

    scanf("%d %d %f",&C1, &quant, &preco);

    total = total + (quant * preco);

    scanf("%d %d %f",&C1, &quant, &preco);

    total = total + (quant * preco);

    printf("VALOR A PAGAR : R$ %.2f", total);

    return 0;

    
}