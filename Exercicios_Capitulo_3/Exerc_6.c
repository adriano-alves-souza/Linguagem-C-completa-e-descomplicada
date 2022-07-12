/*6) Leia uma velocidade em km/h (quilômetros por hora) e apresente convertida em
m/s (metros por segundo). A fórmula de conversão é M = K/3,6, sendo K a velocidade em km/h e M em m/s.*/
#include <stdio.h>

int main(void){
    int k,m;
    printf("Digite a velocidade KM/h: ");
    scanf("%d", &k);
    m = k/3.6;
    printf("%dKM/h são %dm/s\n",k,m);
    return 0;
}