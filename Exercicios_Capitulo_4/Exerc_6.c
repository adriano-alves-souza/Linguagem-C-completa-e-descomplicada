/*6) Faça um programa que receba a altura e o sexo de uma pessoa e calcule e mostre
seu peso ideal, utilizando as seguintes fórmulas (em que “h” corresponde à altura):
• Homens: (72,7 * h) – 58
• Mulheres: (62,1 * h) – 44,7*/
#include <stdio.h>

int main(void){
    float h,total;
    char sexo;
    
    printf("Digite a altura da pessoa: ");
    scanf("%f", &h);
    printf("Digite o sexo da pessoa [F/M]: ");
    scanf(" %c", &sexo);

    switch (sexo)
    {
    case 'f':
        total = 62.1F * h - 44.7F;
        printf("Seu peso ideal é %f\n",total);
        break;
    case 'm':
        total = 72.7F * h - 58;
        printf("Seu peso ideal é %f\n", total);
        break;
    }
    return 0;
}