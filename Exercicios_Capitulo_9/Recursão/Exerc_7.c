/*7) Escreva uma função recursiva que receba por parâmetro dois valores inteiros x e y
e calcule e retorne o resultado de x^y para o programa principal.*/

#include <stdio.h>
int potencia(int x, int y);
int main(void){
    int x = 3;
    int y = 3;

    printf("%d elevado a %d = %d.\n",x,y,potencia(x,y));
    return 0;
}
int potencia(int x, int y){
    if(y == 0){
        return 1;
    }else{
        return x * potencia(x, y -1);
    }
}