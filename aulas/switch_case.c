#include<stdio.h>

int main(){
    int opcao, presenca;
    float nota_1, nota_2, media;
    printf("---MENU---\n");
    printf("1 - MEDIA DO ALUNO\n");
    printf("2 - PRESENCA DO ALUNO\n");
    printf("Digite a opcao desejada: ");
    scanf("%d", &opcao);
    switch(opcao){
        case 1: 
        printf("\n--- MEDIA DO ALUNO ---\n");
        printf("Digite sua primeira nota: ");
        scanf("%f", &nota_1);
        printf("DIgite sua segunda nota: ");
        scanf("%f", &nota_2);
        media = (nota_1 + nota_2)/2;
        printf("A media final do aluno é %.2f", media);
        
        break;
        

        case 2: 
        printf("Selecionado opcao 2");
        break;


        default: 
        printf("Opcao invalida!");
    }

    return 0;
}