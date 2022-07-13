/*16) Em matemática, o número harmônico designado por Hn define-se como o enésimo termo da série harmônica. 
Ou seja: Hn = 1 + 1/2 + 1/3 + 1/4 +...1/n Apresente um programa que calcule o valor de qualquer Hn.*/
#include <stdio.h>

int main(void){
    int n,i;
    float hn;
    printf("Termo? ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++){
        hn += (1.0/i);
    }

    printf("Hn = %f\n",hn);
    return 0;
}