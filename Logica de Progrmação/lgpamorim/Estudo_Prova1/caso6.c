// Média ponderada com dois valores.
#include <stdio.h>
int main(){

    double A, B, M;

    scanf("%lf\n %lf", &A, &B);
    M = ((A * 3.5) + (B * 7.5))/ 11;

    printf("MÉDIA = %.5lf", M);

    return 0;
}