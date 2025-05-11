// Matheus De Carvalho Amorim; RA: 22503396

#include <stdio.h>
#include <math.h>
int main(){

double R, pi, VOLUME;
pi = 3.14159;
scanf("%lf", &R);
VOLUME = ((4.0/3)* pi * pow(R, 3));
printf("VOLUME = %.3lf", VOLUME);

return 0; 
}