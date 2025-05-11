//Matheus De Carvalho Amorim; RA: 22503396

#include <stdio.h>
int main(){
int X; 
float Y, consumo_medio;
scanf("%d", &X);
scanf("%f", &Y);
 consumo_medio = X/Y; 
printf("%.3lf Km/l", consumo_medio);

return 0; 
}