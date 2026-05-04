#include <stdio.h>

int main(){
    int quantidade_notas;
    printf("Digite a quantidade de notas: ");
    scanf("%d", &quantidade_notas);
    float notas[quantidade_notas];
    float soma = 0;

    for(int i = 0; i < quantidade_notas; i++){
        printf("Digite sua nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        soma += notas[i];
    }

    float media = soma / quantidade_notas;

    printf("A media do aluno e: %.2f\n", media);

    return 0;
}

    //notas[0] = 10;

    //notas[1] = 8;


    //float media = (notas[0] + notas[1] + notas[2])/3;

    //printf("A media do aluno e: %.2f", media);
