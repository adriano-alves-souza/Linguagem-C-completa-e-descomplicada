/*11) Escreva uma função que receba por parâmetros dois valores inteiros x e y e calcule
e retorne o resultado de x^y para o programa principal. Não use nenhuma função pronta para isso.*/

#include <stdio.h>
int potencia(int x, int y);
int main(void){
    int x,y;

    printf("Base: ");
    scanf("%d", &x);
    printf("Expoente: ");
    scanf("%d", &y);

    printf("%d elevado a %d = %d.\n",x,y,potencia(x,y));
    return 0;
}

int potencia(int x, int y){

    if(y == 0){
        return 1;
    }
    else{
        return x * potencia(x, y-1);
    }
}