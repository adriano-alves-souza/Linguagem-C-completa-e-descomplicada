/*3) Escreva uma função que receba um array de 10 elementos e retorne a sua soma.*/

#include <stdio.h>
int somatorio(int *vetor, int n);
int main(void){
    int vet[] ={1,2,3,4,5,6,7,8,9,10};
    int soma = somatorio(vet, 10);

    printf("A soma de todos os elementos é %d\n",soma); 
    return 0;
}

int somatorio(int *vetor, int n){
    int soma = 0;
    int i;
    for(i = 0; i < n; i++){
        soma += vetor[i];
    }
    return soma;
}
