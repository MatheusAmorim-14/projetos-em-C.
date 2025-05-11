#include <stdio.h>
#include <math.h>

int main(){
    double A, B, C, tri, cir, pi = 3.14159, trap, quad, ret;
    scanf("%lf %lf %lf", &A, &B, &C);

    tri = (A * C)/2;
    cir = pi * (pow(C, 2));
    trap = ((A + B) * C) /2;
    quad = pow(B, 2);
    ret = A * B;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPÉZIO%.3lf\nQUADRADO: %.3lf\nRETANGULO: %.3lf", tri, cir, trap, quad, ret);

    return 0;
}