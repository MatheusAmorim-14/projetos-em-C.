// Matheus De Carvalho Amorim
// RA: 22503396
#include <stdio.h>


int main() {
    char nome [20];
    printf( "Nome :");
    scanf("%s", &nome);// %s usado para cadeia de caracteres (string)
    printf("%s", nome);
    float salario, venda, total;
    printf("salario:");
    scanf("%f", &salario);
    printf("venda");
    scanf("%f", &venda);
    total = salario + ( venda * 0.15);
    printf("");
}