#include <stdio.h>
int main(){
    float A, B, C, M;
    printf("Digite a nota do primeiro trimeste : ")
    scanf("%f\n %f\n %f", &A, &B, &C);

    M = (((A *2)+ B * 3)+ C *5 )/10;

    if (M<= 0 && M<4.9)
    {
       printf("Aluno Reprovado =()");
    }
    else if (M>= 5.0 && M<6.9 )
    {
       printf("Aluno de Recuperacao Paralela.");
    }
    else
    {
        printf ("ALUNO APROVADO =) ");
    }
    
}