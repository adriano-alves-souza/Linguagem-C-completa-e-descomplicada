/*15) Elabore um programa que faça a leitura de vários números inteiros até que se digite um número negativo. 
O programa tem de retornar o maior e o menor número lido.*/
#include <stdio.h>

int main(void){
    int maior,menor,i,n;

    i = 1;
    do{
        printf("Digite numeros inteiros(numero negativo para sair): ");
        scanf("%d", &n);
        if(n >= 0){
            if(i == 1){
                maior = n;
                menor = n;
            }else{
                if(maior < n){
                    maior = n;
                }
                if(menor > n){
                    menor = n;
                }
            }
            i++;
        }
    }while(n >= 0);
    
    if(i > 1){
        printf("Maior valor lido %d\nMenor valor lido %d\n",maior,menor);
    }
    return 0;
}