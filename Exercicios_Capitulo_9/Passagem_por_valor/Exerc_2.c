/*2) Faça uma função que receba um número inteiro de 1 a 12 e imprima em tela o
mês e a sua quantidade de dias de acordo com o número digitado pelo usuário.
Exemplo: Entrada = 4. Saída = abril.*/

#include <stdio.h>
void calendario(int x);
int main(void){
    int num;
    printf("Digite um numero de 1 a 12: ");
    scanf("%d", &num);

    calendario(num);
    return 0;
}

void calendario(int x){
    switch(x){
        case 1:
            printf("Janeiro.\n");
        break;
        case 2:
            printf("Fevereiro.\n");
        break;
        case 3:
            printf("Março.\n");
        break;
        case 4:
            printf("Abril.\n");
        break;
        case 5:
            printf("Maio.\n");
        break;
        case 6:
            printf("Junho.\n");
        break;
        case 7:
            printf("Julho.\n");
        break;
        case 8:
            printf("Agosto.\n");
        break;
        case 9:
            printf("Setembro.\n");
        break;
        case 10:
            printf("Outubro.\n");
        break;
        case 11:
            printf("Novembro.\n");
        break;
        case 12:
            printf("Dezembro.\n");
        break;
    }
}