/*4) Escreva uma função que receba um array contendo a nota de 10 alunos e retorne
a média dos alunos.*/

#include <stdio.h>
float media(float *vet, int n);
int main(void){
    float notas[] = {5.6,4.7,8.9,8.8,9.5,7.8,9.8,4.5,7.8,8.8};
    float mediaAlunos = media(notas, 10);

    printf("A media dos alunos é %f\n", mediaAlunos);
    return 0;
}

float media(float *vet, int n){
    int i;
    float soma = 0;
    for(i = 0; i < n; i++){
        soma += vet[i];
    }
    return soma / n;
}