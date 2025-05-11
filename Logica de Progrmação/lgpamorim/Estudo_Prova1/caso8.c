// Fúncionario e salário 
#include <stdio.h>
int main(){

    int N, H;// N = número funcionário/ H= horas trabalhadas 

    float valor, salario; // 
    scanf("%d\n %d\n %f", &N, &H, &valor);
   salario = H * valor;

   printf("NÚMERO = %d\nSALÁRIO = U$ %.2f", N, salario);

   return 0;
}