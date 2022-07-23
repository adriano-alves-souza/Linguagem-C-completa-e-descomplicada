/*9) Elabore uma função que receba três notas de um aluno como parâmetros e uma
letra. Se a letra for “A”, a função deverá calcular a média aritmética das notas do
aluno; se for “P”, deverá calcular a média ponderada, com pesos 5, 3 e 2. Retorne
a média calculada para o programa principal.*/

#include <stdio.h>
float media(float n1,float n2, float n3, char letra);
int main(void){
    float n1,n2,n3,resultado;
    char letra;

    printf("Digite as tres notas: ");
    scanf("%f%f%f", &n1,&n2,&n3);
    setbuf(stdin,NULL);
    printf("(A) media aritimetica.\n(P) media ponderada.\n");
    letra = getchar();

    resultado = media(n1,n2,n3,letra);
    printf("A media do aluno é %f.\n",resultado);
    return 0;
}

float media(float n1,float n2, float n3, char letra){

    switch(letra){
        case 'A':
            return (n1+n2+n3)/3.0;
        break;
        case 'P':
            return (n1 * 5 + n2 * 2 + n3 * 3) /(5+3+2);
        break;
    }
}