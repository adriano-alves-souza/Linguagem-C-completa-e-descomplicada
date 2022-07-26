/*10) Escreva uma função recursiva que receba um número inteiro, maior ou igual a
zero, e retorne o enésimo termo da sequência de Fibonacci. Essa sequência começa
no termo de ordem zero e, a partir do segundo termo, seu valor é dado pela soma
dos dois termos anteriores. Alguns termos dessa sequência são: 0, 1, 1, 2, 3, 5, 8,13, 21, 34.*/

#include <stdio.h>
int fibonacci(int termo);
int main(void){
    int termo = 10;

    printf("%d termo de fibonacci é %d.\n", termo, fibonacci(termo));
    return 0;
}
int fibonacci(int termo){
    if(termo <= 1){
        return termo;
    }else{
        return fibonacci(termo - 1) + fibonacci(termo - 2);
    }
}