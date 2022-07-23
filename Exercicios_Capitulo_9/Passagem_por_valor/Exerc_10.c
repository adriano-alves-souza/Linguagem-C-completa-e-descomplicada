/*10) Escreva uma função que receba dois valores numéricos e um símbolo. Esse símbolo representará a 
operação que se deseja efetuar com os números. Assim, se o símbolo for “+”, deverá ser realizada uma adição, 
se for “−”, uma subtração, se for “/”, uma divisão, e, se for “*”, será efetuada uma multiplicação. 
Retorne o resultado da operação para o programa principal.*/

#include <stdio.h>
float calculadora(float n1, float n2, char operacao);
int main(void){
    float n1,n2,resu;
    char opera;

    printf("numeros ");
    scanf("%f%f", &n1,&n2);
    setbuf(stdin,NULL);
    printf("Operação:\nAdição: +\n:subtração: -\nMuiltiplicação: *\nDivisão: /\nOpção: ");
    opera = getchar();

    resu = calculadora(n1,n2,opera);
    if(resu){
        printf("Resultado: %f\n",resu);
    }else{
        printf("Erro! divisão por zero.\n");
    }
    return 0;
}

float calculadora(float n1, float n2, char operacao){
    switch(operacao){
        case '+':
            return n1 + n2;
        break;
        case '-':
            return n1 - n2;
        break;
        case '*':
            return n1 * n2;
        break;
        case '/':
            if(n2 != 0){
                return n1/n2;
            }else{
                return n2;   
            }
        break;
    }
}