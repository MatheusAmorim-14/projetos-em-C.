// Matheus De Carvalho Amorim: RA 22503396

#include <stdio.h>
int main(){

    int N, minutos, horas, resto;

    scanf("%d", &N);
    
    horas = N / 3600;
    resto = N % 3600;
    minutos = resto / 60;
    N = resto % 60;

    printf ("%d : %d : %d\n", horas, minutos, N );
}