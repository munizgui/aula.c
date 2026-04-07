#include<stdio.h>

int main(){

    // Tomada de decisão com estrutura IF, Else IF e Else

    int presenca; // A presença deve esta entre 0 a 100

    float nota_1, nota_2;

    printf("------------------------\n");
    printf("CALCULADORA DE APROVACAO\n");
    printf("------------------------\n");
    printf("Digite sua primeira nota: ");
    scanf("%f", &nota_1);
    printf("Digite sua segunda nota: ");
    scanf("%f", &nota_2);
    printf("Digite a presenca do aluno (de 0 a 100): ");
    scanf("%d", &presenca);
    

    float media = (nota_1 + nota_2) / 2;

    if(media>=9 && presenca >=75){
        printf("Aluno com Excelencia!");
    }else if(media>=6 && presenca >=75){
        printf("Aluno Aprovado!");
    }else if(media>=6 && presenca <75){
        printf("Aluno Reprovado por Falta!");
    }else if(media<6 && presenca <75){
        printf("Aluno Reprovado por nota!");
    }else{
        printf("Aluno Reprovado");
    }

    return 0;

}