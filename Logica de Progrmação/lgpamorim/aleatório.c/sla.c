#include <stdio.h>
#include <string.h>

int main(){
 char bem[4] = "bem";  
 char name[100];
 scanf("%s", &name);
 printf("Digite seu nome: %s", &name);
 
 printf("Como voce se saiu?");
 scanf("%s", &name);

 if ( strcmp(name, bem ) == 0)
 {
    printf("Bora tomar uma Krl tu e foda mlk\n Tu e gigante RB consegiu gabaritar? Muito foda");
 }
 else
 {
    printf("Tu ta melhorando continue assim, ou nao");
 }
 
}