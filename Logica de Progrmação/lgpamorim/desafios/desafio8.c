#include <stdio.h>

int main(){
int numero, hora;
float valor, SALARIO;
scanf("%d %d", &numero, &hora);
scanf("%f", &valor);

SALARIO = valor*hora;

printf("SALARIO= U$ %.2f", SALARIO);
return 0;
}