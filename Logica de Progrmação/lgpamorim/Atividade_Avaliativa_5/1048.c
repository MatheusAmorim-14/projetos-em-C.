// Matheus De Carvalho Amorim Ra: 22503396
#include <stdio.h>
int main(){

float salario, novosalario, reajuste, percentual;
scanf("%f", &salario);

if( salario >= 0 && salario <=400.00){
    novosalario = ((salario * 0.15) + salario);
    reajuste = ( novosalario - salario);
    percentual = 15;

}


    else if ( salario > 400.00 && salario <= 800.00){
     novosalario = ((salario * 0.12) + salario) ;
    reajuste = ( novosalario - salario);
    percentual = 12 ;
    }

    else if ( salario > 800.00 && salario <=1200.00){
     novosalario = ((salario * 0.10) + salario);
    reajuste = ( novosalario - salario);
    percentual = 10 ;
    }

 else if ( salario > 1200 && salario <= 2000){
     novosalario = ((salario * 0.07) + salario);
    reajuste = ( novosalario - salario);
    percentual = 7 ;
    }

 else if (salario > 2000)
 {
    novosalario = (( salario * 0.04) + salario);
    reajuste = ( novosalario - salario);
    percentual = 4 ;
 }
 
 printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm perentual: %.f %% ", novosalario, reajuste, percentual);

 }

