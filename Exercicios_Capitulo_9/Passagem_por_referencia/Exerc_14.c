/*14) Elabore uma função que receba por parâmetros os coeficientes de uma equação do segundo grau. 
Em seguida, calcule e mostre as raízes dessa equação.  Lembre-se de que as raízes são calculadas 
como x = -b ± √∆ / 2 * a em que ∆ = b² – 4 * a * c e ax² + bx + c = 0 representa uma equação do segundo grau.
A variável a tem de ser diferente de zero. Caso seja igual, imprima a mensagem “Não é equação de segundo grau” 
e retorne o valor −1. Do contrário, retorne o número de raízes e as raízes (por referência) se elas existirem:
• Se ∆ < 0, não existe real. Número de raízes: 0.
• Se ∆ = 0, existe uma raiz real. Número de raízes: 1.
• Se ∆ > 0, existem duas raízes reais. Número de raízes: 2*/

#include <stdio.h>
#include <math.h>

int calculoDelta(int a, int b, int c);
int equacao(int a, int b, int c, int *x1, int *x2);
void mensagem(int n, int x1, int x2);

int main(void){
    int a,b,c,x1,x2;
    int resu;

    printf("Digite os coeficientes (a,b,c): ");
    scanf("%d%d%d", &a,&b,&c);

    resu = equacao(a,b,c,&x1,&x2);

    mensagem(resu,x1,x2);
    return 0;
}

void mensagem(int n, int x1, int x2){
    if( n == -1){
        printf("Não é equação de segundo grau.\n");
    }else if(n == 0){
        printf("não existe real. Número de raízes: %d.\n",n);
    }else if(n == 1){
        printf("existe uma raiz real. Número de raízes: %d.\n",n);
        printf("X1 = %d\n", x1);
    }else if(n == 2){
        printf("existem duas raízes reais. Número de raízes: %d.\n",n);
        printf("X1 = %d.\nX2 = %d.\n", x1,x2);
    }
}

int calculoDelta(int a, int b, int c){
    return (b*b) - 4 * a * c;
}

int equacao(int a, int b, int c, int *x1, int *x2){
    if(a == 0){
        return - 1;
    }

    int delta = calculoDelta(a,b,c);
    if(delta <  0){
        return 0;
    }

    if(delta == 0){
        *x1 = (-b + sqrt(delta)) / (2 * a);
        return 1;
    }

    if(delta > 0){
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
        return 2;
    }
}