/*7) Elabore uma função que receba três números inteiros como parâmetro, representando horas, minutos e segundos. 
A função deve retornar esse horário convertido em segundos.*/

#include <stdio.h>

int convesorHora(int hora, int minuto, int segundo);
int main(void){
    int hora, minuto, segundo;

    printf("Digite hora:minuto:segundo: ");
    scanf("%d%d%d", &hora,&minuto,&segundo);

    printf("São %dsegundos.\n",convesorHora(hora,minuto,segundo));
    return 0;
}
int convesorHora(int hora, int minuto, int segundo){
    return (hora * 3600) + (minuto * 60) + segundo;
}