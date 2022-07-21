/*8) Elabore uma função para verificar se um número é um quadrado perfeito. Um
quadrado perfeito é um número inteiro não negativo que pode ser expresso como
o quadrado de outro número inteiro. Exemplos: 1, 4, 9.*/

#include <stdio.h>
#include <math.h>
void qdperfeito(int num);
int main(void){
    int num;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);

    qdperfeito(num);
    return 0;
}
void qdperfeito(int num){
    int resu = sqrt(num);
    printf("%d\n",resu);
    num == pow(resu,2)? printf("É um quadrado perfeito.\n"):printf("Não é um quadrado perfeito.\n");
}