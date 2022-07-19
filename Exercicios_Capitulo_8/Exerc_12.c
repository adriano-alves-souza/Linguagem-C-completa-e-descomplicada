/*12) Crie uma enumeração representando os dias da semana. Agora, escreva um programa que leia um 
valor inteiro do teclado e exiba o dia da semana correspondente.*/

#include <stdio.h>
enum week{domingo=1,segunda,terca,quarta,quinta,sexta,sabado};
int main(void){
    enum week semana;
    printf("Dia da semana: ");
    scanf("%d", &semana);

    switch (semana){
        case 1:
            printf("Domingo.\n");
        break;
        case 2:
            printf("Segunda.\n");
        break;
        case 3:
            printf("Terça.\n");
        break;
        case 4:
            printf("Quarta.\n");
        break;
        case 5:
            printf("Quinta.\n");
        break;
        case 6:
            printf("Sexta.\n");
        break;
        case 7:
            printf("Sabado.\n");
        break;
    }
    return 0;
}