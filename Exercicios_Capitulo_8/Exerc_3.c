/*3) Crie uma estrutura para representar as coordenadas de um ponto no plano (posi-
ções X e Y). Em seguida, declare e leia do teclado dois pontos e exiba a distância
entre eles.*/

#include <stdio.h>
#include <math.h>
struct ponto{
    int Xa,Xb,Ya,Yb;
};
int main(void){
    struct ponto p;
    int resu;
    printf("Xa Xb: ");
    scanf("%d%d", &p.Xa, &p.Xb);
    printf("Ya Yb: ");
    scanf("%d%d", &p.Ya,&p.Yb);

    resu = sqrt(pow(p.Xb - p.Xa,2) + pow(p.Yb - p.Ya,2));
    printf("distncia: %d\n", resu);
    return 0;
}