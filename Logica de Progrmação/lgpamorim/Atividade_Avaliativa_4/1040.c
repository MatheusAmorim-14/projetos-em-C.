// Matheus De Carvalho Amorim RA: 22503396
#include <stdio.h>
#include <stdio.h>

int main() {
    double N1, N2, N3, N4, Media, Notaexame, MediaFinal;
    
    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
    
    Media = (N1 * 2 + N2 * 3 + N3 * 4 + N4 * 1) / 10;
    printf("Media: %.1lf\n", Media);
    
    if (Media >= 7.0) {
        printf("Aluno aprovado.\n");
    } 
    else if (Media < 5.0) {
        printf("Aluno reprovado.\n");
    } 
    else if (Media >= 5.0 && Media <= 6.9) {
        printf("Aluno em exame.\n");
        scanf("%lf", &Notaexame);
        printf("Nota do exame: %.1lf\n", Notaexame);
        
        MediaFinal = (Media + Notaexame) / 2;
        
        if (MediaFinal >= 5.0) {
            printf("Aluno aprovado.\n");
        } else {
            printf("Aluno reprovado.\n");
        }
        
        printf("Media final: %.1lf\n", MediaFinal);
    }
    
    return 0;
}
