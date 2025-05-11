#include <stdio.h>
#include <math.h>

int main(){
    double x1, y1, x2, y2, distX, distY, distancia;

    scanf("%lf %lf\n %lf %lf", &x1, &y1, &x2, &y2);

    distX = x2 - x1;
    distY = y2 - y1;
    distancia = sqrt(pow(distX, 2)+ pow(distY, 2));

    printf("The distance between point X and point Y = %.4lf", distancia);

    return 0;
}