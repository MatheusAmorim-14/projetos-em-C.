// Calcúlar a área da cicuferência. 
#include <stdio.h>
int main(){

    double r, pi = 3.14159 , A;
    scanf("%lf", &r);

    A = ( pi * (r * r));
    printf("A=%.4lf", A);

    return 0;
}