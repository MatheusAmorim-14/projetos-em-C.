// Matheus De Carvalho Amorim Ra : 22503396



#include <stdio.h>
int main(){
int A, B;
char x;
printf("Digite o primeiro numero:");
scanf("%d", &A);
printf("Digite a operacao (+,-,*,/): ");
scanf("%s", &x);
printf("Digite o segundo numero: ");
scanf("%d", &B);


switch (x)
{
case '+':{
    printf ("Resultado: %d", (A + B));
    break;
}

case '-':{
    printf ("Resultado: %d", (A - B));
    break;
}
case '*':{
    printf ("Resultado: %d", (A * B));
    break;
}
case '/':{
    if (B == 0)
    {
        printf("Nao e possível fazer a divisão por 0");
    }
    
    else{ 
        printf ("Resultado: %d", (A / B));

    }
    break;
}

default:{
    break;
}
}
}