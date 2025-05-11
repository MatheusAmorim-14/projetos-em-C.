// Matheus De Carvalho Amorim: RA 22503396
//  Bhaskara--> x = (-b +- raíz(b*b - 4ac))/ 2a
// dar erro quando: Divisão por zero: Se 'a' for igual a zero, a divisão por 2a não é possível.
// Raiz quadrada de número negativo: Se o delta for negativo, a raiz quadrada não é um número real.
#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C;
    double delta, R1, R2;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    if (A == 0) {
        printf("Impossivel calcular\n");
        return 0;
    }
    
    // Calculando o delta
    delta = pow(B, 2) - 4 * A * C;
    
    if (delta < 0) {
        printf("Impossivel calcular\n");
        return 0;
    }
    
   
    R1 = (-B + sqrt(delta)) / (2 * A);
    R1 = (-B - sqrt(delta)) / (2 * A);
    
    printf("R1 = %.5lf\n", R1);
    printf("R2 = %.5lf\n", R2);
    
    return 0;
}