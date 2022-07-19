/*7) Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos
hora, minuto e segundo. Agora, escreva um programa que leia um vetor de cinco
posições dessa estrutura e imprima a maior hora.*/

#include <stdio.h>
#define TAM 5
struct relogio{
    int hora,minuto,segundo;
};

int main(void){
    struct relogio hr[TAM];
    int i;
    for(i = 0; i < TAM; i++){
        printf("Hora:Minuto:Segundo ");
        scanf("%d%d%d", &hr[i].hora,&hr[i].minuto,&hr[i].segundo);
    }

    int maiorH = hr[0].hora;
    int maiorM = hr[0].minuto;
    int maiorS = hr[0].segundo;
    for(i = 1; i < TAM; i++){
        if(maiorH < hr[i].hora){
            maiorH = hr[i].hora;
            maiorM = hr[i].minuto;
            maiorS = hr[i].segundo;
        }else if(maiorH == hr[i].hora){
            if(maiorM < hr[i].minuto){
                maiorM = hr[i].minuto;
                maiorS = hr[i].segundo;
            }else if(maiorM  == hr[i].minuto){
                if(maiorS < hr[i].segundo){
                    maiorS = hr[i].segundo;
                }
            }
        }
    }

    printf("Maior hora: %d:%d:%d\n", maiorH,maiorM,maiorS);
    return 0;
}