/*5) Usando a estrutura Retângulo do exercício anterior, faça um programa que declare e leia uma estrutura 
Retângulo e um Ponto, e informe se esse ponto está ou não dentro do retângulo.*/

#include <stdio.h>
struct ponto{
    int x;
    int y;
};

struct retangulo{
    struct ponto sE;
    struct ponto iD;
};

int main(void){
    int b,h;
    int area,comprimento,perimetro;
    struct retangulo calc;
    struct ponto p;

    printf("Xa Xb: ");
    scanf("%d%d", &calc.sE.x,&calc.sE.y);
    printf("Ya Yb: ");
    scanf("%d%d", &calc.iD.x,&calc.iD.y);
    printf("X Y: ");
    scanf("%d%d", &p.x,&p.y);

    b = calc.iD.x - calc.sE.x;
    h = calc.sE.y - calc.iD.y;

    if(p.x - p.y - b <= 0 && p.x - p.y + h >= 0 && p.x + p.y - 2 * h+b <= 0 && p.x + p.y - b >= 0 ){
        printf("esta dentro.\n");
    }else{
        printf("Não esta dentro.\n");
    }


    return 0;
}