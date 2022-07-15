/*11) Leia um conjunto de números reais, armazenando-o em vetor. Em seguida, calcule o quadrado de cada elemento desse vetor armazenando esse resultado em outro
vetor. Os conjuntos têm, no máximo, 20 elementos. Imprima os dois conjuntos de números.*/

#include <stdio.h>
#define TAM 20
int main(void){
    float vet1[TAM],vet2[TAM];
    int i;

    printf("Digite 20 numeros reais.\n");
    for(i = 0; i <TAM; i++){
        printf("Valor %d: ",i+1);
        scanf("%f", &vet1[i]);
    }

    for(i = 0; i < TAM; i++){
        vet2[i] = vet1[i] * vet1[i];
    }

    printf("\n\nVetor 1.\n");
    for (i = 0; i < TAM; i++){
        printf("%f\n", vet1[i]);
    }
    printf("\nVetor 2.\n");
    for (i = 0; i < TAM; i++){
        printf("%f\n", vet2[i]);
    }
    return 0;
}