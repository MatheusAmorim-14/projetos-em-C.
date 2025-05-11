// Matheus De Carvalho Amorim Ra: 22503396
#include <stdio.h>
int main(){

    int idade;
    printf("Digite sua idade:"); scanf("%d", &idade);

    if (idade <= 0)
    {
        printf ("Idade invalida");
    }
    
    else if  (idade < 12)
    {
        printf("Voce e um(a) Criança");
    } 

    else if (idade>= 12 && idade <=17)
    {
        printf("Voce e um(a) Adolecente");
    }

    else if (idade >= 18 && idade<= 59)
    {
        printf("Voce e um(a) Adulto");
    }

    else if (idade >= 60)
    {
       printf("Voce e um(a) Idoso");
    }
  return 0;
    
    
}