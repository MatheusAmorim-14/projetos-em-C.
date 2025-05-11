#include <stdio.h>
int main(){

    char nome[50];
    double salariofixo,vendas, total; 
    printf("Digite o nome do funcionario: ");
     scanf("%s", &nome);
    printf("Digite seu salario fixo: ");
     scanf("%lf", &salariofixo);
    printf("Digite o valor das suas vendas: ");
     scanf("%lf", &vendas);

    total = salariofixo + (vendas * 0.15);
    printf("TOTAL A RECER NO MES = R$ %.2lf", total);
    return 0; 
}