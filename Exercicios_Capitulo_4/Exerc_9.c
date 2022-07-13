/*9) Faça um programa que leia a altura e o peso de uma pessoa. De acordo com a
tabela a seguir, verifique e mostre qual a classificação dessa pessoa.
Altura                       Peso
                    Até 60      Entre 60-90 (inclusive)     Acima de 90
Menor do que 1,20       A               D                        G
1,20-1,70               B               E                        H
Maior do que 1,70       C               F                        I*/
#include <stdio.h>

int main(void){
    float altura,peso;
    printf("Digite a altura: ");
    scanf("%f", &altura);
    printf("Digite o peso: ");
    scanf("%f", &peso);

    if(altura < 1.20){
        if(peso <= 60){
            printf("A\n");

        }else if(peso > 60 && peso <= 90){
            printf("D\n");

        }else if(peso > 90){
            printf("G\n");
        }
    }else if(altura >= 1.20 && altura <= 1.70){
        if(peso <= 60){
            printf("B\n");

        }else if(peso > 60 && peso <= 90){
            printf("E\n");

        }else if(peso > 90){
            printf("H\n");
        }
    }else if(altura > 1.70){
        if(peso <= 60){
            printf("C\n");

        }else if(peso > 60 && peso <= 90){
            printf("F\n");

        }else if (peso > 90){
            printf("I\n");
        }
    }
    return 0;
}