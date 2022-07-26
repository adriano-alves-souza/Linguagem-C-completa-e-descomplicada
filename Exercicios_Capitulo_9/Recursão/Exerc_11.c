/*11) Escreva uma função recursiva que receba um valor inteiro e o retorne invertido.
Exemplo:
Número lido = 123.
Número retornado = 321.*/

#include <stdio.h>
#include <math.h>

int inverte(int n);

int main(void){
    int num = 69457;

    printf("%d.\n", inverte(num));
    return 0;
}
int inverte(int n) {
	if((n / 10) == 0) {
		return n;
	}
	return inverte(n / 10) + (n % 10) * pow(10, abs(log10(n)));
}