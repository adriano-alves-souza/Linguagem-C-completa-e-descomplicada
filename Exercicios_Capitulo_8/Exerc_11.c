/*11) Escreva um programa que contenha uma estrutura representando uma data válida. 
Essa estrutura deve conter os campos dia, mês e ano. Em seguida, leia duas datas e armazene nessa estrutura. 
Calcule e exiba o número de dias que decorreram entre as duas datas.*/

#include <stdio.h>
struct data{
    int dia,mes,ano;
}cale[2];
int main(void){
    int i;
    for(i = 0; i < 2; i++){
        printf("Data %d (dia/mes/ano): ",i+1);
        scanf("%d%d%d", &cale[i].dia, &cale[i].mes, &cale[i].ano);
    }

    int dias = (cale[0].ano - cale[1].ano) * 365;
    if(cale[0].ano > cale[1].ano){
        dias *= -1;
    }
    if(cale[0].mes > cale[1].mes){
        dias += (cale[0].mes - cale[1].mes) * 30 * -1;
    }else{
        dias += (cale[0].mes - cale[1].mes) * 30;
    }

    if(cale[0].dia > cale[1].dia){
        dias += (cale[0].dia - cale[1].dia) * -1;
    }else{
        dias += cale[0].dia - cale[1].dia;
    }

    printf("Dias de coridos: %d\n",dias);
    return 0;
}