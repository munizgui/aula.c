#include<stdio.h>

void menu(){printf("---MENU---\n");
    printf("1 - MEDIA DO ALUNO\n");
    printf("2 - PRESENCA DO ALUNO\n");
    printf("Digite a opcao desejada: ");
}

int main(){
    int opcao, presenca;
    float nota_1, nota_2, media;

    menu();
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
        printf("\n--- PRESENCA DO ALUNO ---\n");
        printf("Digite a presenca do aluno(0-100): ");
        scanf("%d", &presenca);
        if(presenca > 74 && presenca < 101 ){
            printf("Aluno Aprovado com %d %%", presenca);
        }else if(presenca > 100 || presenca < 0){
            printf("Presenca Invaida!");
        }else{
            printf("Aluno Reprovado!");
        }
 
        break;


        default: 
        printf("Opcao invalida!");
    }

    return 0;
}