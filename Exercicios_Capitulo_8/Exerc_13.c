/*13) Crie uma enumeração representando os meses do ano. Agora, escreva um programa que leia um 
valor inteiro do teclado e exiba o nome do mês correspondente e quantos dias ele possui.*/

#include <stdio.h>
enum months{JANEIRO=1,FEVEREIRO,MARCO,ABRIL,MAIO,JUNHO,JULHO,AGOSTO,SETEMBRO,OUTUBRO,NOVEMBRO,DEZEMBRO};
int main(void){
    enum months mes;
    printf("Mes: ");
    scanf("%d", &mes);

    switch(mes){
        case 1:
            printf("Janeiro. 31 dias");
        break;
        case 2:
            printf("Fevereiro. 28 dias");
        break;
        case 3:
            printf("Março. 31 dias");
        break;
        case 4:
            printf("Abril. 30 dias");
        break;
        case 5:
            printf("Maio. 31 dias");
        break;
        case 6:
            printf("Junho. 30 dias");
        break;
        case 7:
            printf("Julho. 31 dias");
        break;
        case 8:
            printf("Agosto. 31 dias");
        break;
        case 9:
            printf("Setembro. 30 dias");
        break;
        case 10:
            printf("Outubro. 31 dias");
        break;
        case 11:
            printf("Novembro. 30 dias");
        break;
        case 12:
            printf("Dezembro. 31 dias");
        break;
    }
    return 0;
}