/*2) Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). 
Em seguida, declare e leia do teclado um ponto e exiba a distância
dele até a origem das coordenadas, isto é, a posição (0,0).*/

#include <stdio.h>
#include <math.h>
struct plano{
    int x,y;
};
int main(void){
    struct plano p;
    int resu;
    printf("X: ");
    scanf("%d", &p.x);
    printf("Y: ");
    scanf("%d", &p.y);
    
    resu = sqrt(pow(p.x - 0,2) + pow(p.y - 0,2));
    printf("distancia: %d\n",resu);
    return 0;
}