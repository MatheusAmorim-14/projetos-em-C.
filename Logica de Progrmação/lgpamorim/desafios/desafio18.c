#include <stdio.h>

void bubbleSort(int * vetor) {

    int i, j, aux;
    
    for ( i = 0; i < 2; i++) {
        for(j = 0; j < 2; j++){
            if (vetor[j] > vetor[j] + 1) {
                aux = vetor[j];
                vetor[j + 1]  = aux;

            }
        }
    }
}

int main(){
    int vetorOriginal[3], vetorOrdenado[3];
    int i;

    for( i = 0; i< 3; i++ ){
        scanf("%d", &vetorOriginal[i]);
    }
}