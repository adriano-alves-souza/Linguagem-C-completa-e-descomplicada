/*6) Faça um programa que leia um valor do tipo double e depois o imprima na forma
de notação científica.*/
#include <stdio.h>

int main(void){
    double num;
    scanf("%lf", &num);
    printf("%E",num);
    return 0;
}