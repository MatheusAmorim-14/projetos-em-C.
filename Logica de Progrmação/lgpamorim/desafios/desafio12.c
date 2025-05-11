#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int original = N;
    int notas[] = {100, 50, 20, 10, 5, 2, 1};
    int tamanho = sizeof(notas) / sizeof(notas[0]);
    
    printf("%d\n", original);
    
    for (int i = 0; i < tamanho; i++) {
        int quantidade = N / notas[i];
        printf("%d nota(s) de R$ %d,00\n", quantidade, notas[i]);
        N %= notas[i];
    }
    
return 0; }