/*10) A importância de R$780.000,00 será dividida entre três ganhadores de um concurso, sendo que:
i. O primeiro ganhador receberá 46% do total.
ii. O segundo receberá 32% do total.
iii. O terceiro receberá o restante.
Calcule e imprima a quantia recebida por cada um dos ganhadores.*/
#include <stdio.h>
const float total = 780.000;
int main(void){
    float p1,p2,p3;
    p1 = total * (46.0 / 100.0);
    p2 = total * (32.0 / 100.0);
    p3 = total - (p1 + p2);
    printf("Primeiro ganhor recebe %fR$\n",p1);
    printf("segundo ganhor recebe %fR$\n",p2);
    printf("terceiro ganhor recebe %fR$\n",p3);
    return 0;
}