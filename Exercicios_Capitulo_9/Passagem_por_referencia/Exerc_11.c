/*11) Escreva uma função que receba uma string e converta todos os seus caracteres
em maiúscula. Dica: subtraia 32 dos caracteres cujo código ASCII está entre 97 e
122.*/

#include <stdio.h>
#include <string.h>
void maiscula(char *vet, int n);
int main(void){
    char string[40];

    printf("Digite uma string: ");
    fgets(string, 40, stdin);

    maiscula(string, strlen(string));
    printf("%s.\n", string);
    return 0;
}

void maiscula(char *vet, int n){
    int i;
    for(i = 0; vet[i] != '\0'; i++){
        vet[i] = vet[i] - 32;
    }
}