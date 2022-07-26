/*8) A multiplicação de dois números inteiros pode ser feita através de somas sucessivas
(por exemplo, 2 * 3 = 2 + 2 + 2). Crie uma função recursiva que calcule a multiplicação 
por somas sucessivas de dois inteiros.*/

#include <stdio.h>

#include <stdio.h>
int multiplicacao(int x, int y);
int main(void){
    int x = 10;
    int y = 3;

    printf("%d x %d = %d.\n",x,y,multiplicacao(x,y));
    return 0;
}
int multiplicacao(int x, int y){
    if(y == 0){
        return 0;
    }else{
        return x + multiplicacao(x, y -1);
    }
}