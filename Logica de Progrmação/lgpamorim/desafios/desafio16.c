#include <stdio.h>
int main(){
float Lista [6] ={0.0, 4.0, 4.5, 5.0, 2.0, 1.5};
int Y, code;
float Total;
scanf("%d %d", &code, &Y); 
Total = (Lista[code] * Y);

printf ("Total: R$ %.2f", Total);
}