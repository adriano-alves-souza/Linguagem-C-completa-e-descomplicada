/*20) Faça uma função que calcule e retorne o número neperiano e, e = 2,71828183,
usando a série a seguir: e = somatorio de 1/ n!
A função deve ter como parâmetro o número de termos que serão somados, N. 
Note que quanto maior esse número, mais próxima do valor e estará a resposta.*/

#include <stdio.h>
int fatorial(int fat);
double numNeperiano(int n);
int main(void){
    int n;

    printf("Digite o numero de termos: ");
    scanf("%d", &n);

    printf("E = %.8f\n", numNeperiano(n));
    return 0;
}

int fatorial(int fat){
    if(fat == 0){
        return 1;
    }else{
        return fat * fatorial(fat - 1);
    }
}
double numNeperiano(int n){
    double soma = 0;
    int i;
    for(i = 0; i <= n; i++){
        soma += 1.0 / fatorial(i);
    }
    return soma;
}