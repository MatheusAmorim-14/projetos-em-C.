#include <stdio.h>

int main(){
int codigo1, numeroPecas;
float ValorPecas, valorTotal;
valorTotal = 0;

scanf ("%d %d %f", &codigo1, &numeroPecas, &ValorPecas);
valorTotal = valorTotal + (numeroPecas * ValorPecas);

scanf("%d %d %f", &codigo1, &numeroPecas, &ValorPecas);
valorTotal = valorTotal + (numeroPecas * ValorPecas);

printf("VALOR A PAGAR : R$ %.2lf\n", valorTotal);

return 0;
}