/*15) Escreva um programa que leia três variáveis: char, int e float. Em seguida, imprimaas de três maneiras diferentes:
separadas por espaços, por uma tabulação horizontal e uma em cada linha. 
Use um único comando printf() para cada operação de escrita das três variáveis.*/
#include <stdio.h>

int main(void){
    char a;
    int b;
    float c;
    scanf("%c %d %f", &a,&b,&c);
    printf("%c %d %f \n",a,b,c);
    printf("%c\t%d\t%f\n",a,b,c);
    printf("%c\n%d\n%f",a,b,c);
    return 0;
}