/*16) Elabore uma função que receba como parâmetro um valor inteiro n e gere como
saída um triângulo lateral formado por asteriscos conforme o exemplo a seguir,
em que usamos n = 4:
*
**
***
****
***
**
*
*/

#include <stdio.h>
void trianguloLateral(int n);

int main(void){
    int n;
    printf("digite: ");
    scanf("%d", &n);

    trianguloLateral(n);
    return 0;
}

void trianguloLateral(int n){
    int i,j;
    for(i = 0; i < n; i++){
        for (j = 0; j <= i; j++){
            printf("*");
        }
        printf("\n");        
    }
    for(i = n-1; i >= 0; i--){
        for (j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");        
    }
}