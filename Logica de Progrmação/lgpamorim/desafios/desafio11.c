#include <stdio.h>
#include <math.h>

int main(){
float x1, x2, y1, y2, distx, disty, dist;
scanf("%f %f", &x1, &y1);
scanf("%f %f", &x2, &y2);

distx = x2 - x1;
disty =  y2 - y1;
// sqrt para raiz quadrada e sqrf para outraqs raizes;
dist = sqrt((pow(distx, 2) + pow(disty, 2)));

printf("Distancia = %.4f\n", dist);

return (0);
}