// Matheus De Carvalho Amorim Ra: 22503396
#include <stdio.h>
int main(){

int A, B;
scanf ("%d %d", &A, &B);

if ( A%B == 0 || B%A == 0 ){
printf("Sao multiplos");
}

else{
printf("Nao sao multiplos");
}

}