/*15) Leia um vetor com 10 números de ponto flutuante. Em seguida, 
ordene os elementos desse vetor e imprima o vetor na tela.*/

#include <stdio.h>
#define TAM 10
int main(void){
    float vet[TAM];
    int i;

    printf("Digite 10 numeros reais.\n");
    for(i = 0; i < TAM; i++){
        printf("Valor %d: ",i+1);
        scanf("%f", &vet[i]);
    }

    int j,aux;
    for(i = 0; i < TAM -1; i++){
        for(j = i+1; j < TAM; j++){
            if(vet[i] > vet[j]){
                aux = vet[i];
                vet[i] = vet[j];
                vet[j] = aux;
            }
        }
    }

    for (i = 0; i < TAM; i++){
        printf("%f\n", vet[i]);
    }
    
    return 0;
}