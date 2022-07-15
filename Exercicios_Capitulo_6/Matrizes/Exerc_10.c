/*10) Leia uma matriz de tamanho 10 × 3 com as notas de 10 alunos em três provas. Em seguida, 
calcule e escreva na tela o número de alunos cuja pior nota foi na prova 1,
o número de alunos cuja pior nota foi na prova 2 e o número de alunos cuja pior nota foi na prova 3.*/

#include <stdio.h>
#define ALUNO 10
#define NOTA 3

int main(void){
    int i,j;
    float mat[ALUNO][NOTA];

    for (i = 0; i < ALUNO; i++){
        for (j = 0; j < NOTA; j++){
            printf("Aluno %d: Nota: %d: ",i+1,j+1);
            scanf("%f", &mat[i][j]);
        }
    }
    
    int pior1 = 0;
    int pior2 = 0;
    int pior3 = 0;
    int menor,nt;
    for (i = 0; i < ALUNO; i++){
        menor = mat[i][0];
        nt = 0;
        for (j = 1; j < NOTA; j++){
            if(menor > mat[i][j]){
                nt = j;
            }
        }
        if(nt == 0){
            pior1++;
        }else if(nt == 1){
            pior2++;
        }else{
            pior3++;
        }
    }

    printf("número de alunos cuja pior nota foi na prova 1: %d.\n",pior1);
    printf("número de alunos cuja pior nota foi na prova 2: %d.\n",pior2);
    printf("número de alunos cuja pior nota foi na prova 3: %d.\n",pior3);
    return 0;
}