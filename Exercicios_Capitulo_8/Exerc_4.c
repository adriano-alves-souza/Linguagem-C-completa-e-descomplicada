/*4) Crie uma estrutura chamada Retângulo. Essa estrutura deverá conter o ponto
superior esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido
por uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa que
declare e leia uma estrutura Retângulo e exiba a área e o comprimento da diagonal
e o perímetro desse retângulo.*/

#include <stdio.h>
#include <math.h>
struct ponto{
    int x;
    int y;
};

struct retangulo{
    struct ponto sE;
    struct ponto iD;
};

int main(void){
    int a,l;
    int area,comprimento,perimetro;
    struct retangulo calc;

    printf("Xa Xb: ");
    scanf("%d%d", &calc.sE.x,&calc.sE.y);
    printf("Ya Yb: ");
    scanf("%d%d", &calc.iD.x,&calc.iD.y);

    a = calc.iD.x - calc.sE.x;
    l = calc.sE.y - calc.iD.y;

    area = a*l;
    comprimento = sqrt(pow(a,2) + pow(l,2));
    perimetro = (a+l)*2;

    printf("are: %d\n",area);
    printf("comprimento diagonal: %d\n",comprimento);
    printf("perimetro: %d\n",perimetro);
    return 0;
}