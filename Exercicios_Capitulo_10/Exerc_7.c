/*7) Elabore uma função que receba duas strings como parâmetros e verifique se a segunda string 
ocorre dentro da primeira. Use aritmética de ponteiros para acessar os caracteres das strings.*/

#include <stdio.h>
#include <string.h>

int achaString(char *string1, char *string2);

int main(void){
    char string1[] = "está contida na primeira";
    char string2[] = "rim";

    achaString(string1,string2) == 1? printf("String 2 está contida na primeira.\n"):printf("String 2 não está contida na primeira.\n");
    return 0;
}

int achaString(char *string1, char *string2){
    int st2 = 0;
    int tamanhoString2 = strlen(string2);

    while (*string2 != '\0' && *string1 != '\0'){
        if(*string2 == *string1){
            *string1++;
            *string2++;
            st2++;
        }else{
            *string2 - st2;
            if(*string1 != *string2){
                *string1++;
            }
        }      
    }
    if (st2 == tamanhoString2){
        return 1;
    }
    return 0;
}