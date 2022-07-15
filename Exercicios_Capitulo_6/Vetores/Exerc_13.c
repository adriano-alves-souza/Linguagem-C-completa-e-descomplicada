/*13) Faça um programa para ler 10 números diferentes a serem armazenados em um vetor. 
Os números deverão ser armazenados no vetor na ordem em que forem lidos, sendo que, 
caso o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir a ele para digitar outro número. 
Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre
os números que já foram fornecidos. Exiba na tela o vetor final que foi digitado.*/

#include <stdio.h>
#define TAM 10
int main(void){
    int i,j,cont,vet[TAM];

    i = 0;
    printf("Digite numeros diferente..\n");
    while(i < TAM){
        cont = 0;
        printf("Valor %d: ",i+1);
        scanf("%d", &vet[i]);
        for (j = 0; j < i; j++){
            if(vet[i] == vet[j]){
                cont++;
            }
        }
        cont > 0? printf("Numero ja existe digite outtro.\n"): i++;
    }

    for (i = 0; i < TAM; i++){
        printf("%d\n", vet[i]);
    }
    
    return 0;
}