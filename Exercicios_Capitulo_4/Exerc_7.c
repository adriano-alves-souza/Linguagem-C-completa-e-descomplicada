/*7) Uma empresa vende o mesmo produto para quatro diferentes estados. Cada estado possui uma taxa diferente de imposto sobre o produto. Faça um programa
em que o usuário entre com o valor e o estado de destino do produto e o programa retorne o preço final do produto acrescido do imposto do estado em que
ele será vendido. Se o estado digitado não for válido, mostrará uma mensagem de erro.
Estado  MG  SP RJ  MS
Imposto 7% 12% 15% 8%*/
#include <stdio.h>

int main(void){
    float valor,total;
    int estado;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);

    printf("Digite o estado de destino\nMG = 1\nSP = 2\nRJ = 3\nMS = 4\nopção: ");
    scanf("%d", &estado);

    if(estado == 1){
        total = valor + (valor * (7.0 / 100.0));
        printf("Preço final %fR$\n",total);
        
    }else if(estado == 2){
        total = valor + (valor * (12.0 / 100.0));
        printf("Preço final %fR$\n",total);

    }else if(estado == 3){
        total = valor + (valor * (15.0 / 100.0));
        printf("Preço final %fR$\n",total);

    }else if(estado == 4){
        total = valor + (valor * (8.0 / 100.0));
        printf("Preço final %fR$\n",total);
    }
    return 0;
}