// Matheus De Carvalho Amorim: RA 22503396
#include <stdio.h>
// include matph para extrair as coisas dessa biblioteca. 
#include <math.h>

int main(){
double N;
scanf("%lf", &N);

int totalcentavos = (int) round(N * 100);
int notas [] = {10000, 5000, 2000, 1000, 500, 200};
int moedas [] = {100, 50, 25, 10, 5, 1 };


printf("NOTAS:\n");
// Realizar o calculo das nota.
for (int i = 0; i < 6; i++) {
    int quantidade = totalcentavos / notas[i];
    totalcentavos %= notas[i];
    printf("%d nota(s) de R$ %.2f\n", quantidade, notas[i] / 100.0);
}

printf("MOEDAS:\n");
// e agora das moedas 
for (int i = 0; i < 6; i++) {
    int quantidade = totalcentavos / moedas[i];
    totalcentavos %= moedas[i];
    printf("%d moeda(s) de R$ %.2f\n", quantidade, moedas[i] / 100.0);
}
return 0;

}