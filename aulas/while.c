#include <stdio.h>

int main()
{
    
    int numero;
    int limite = 11;
    printf("------/n");
    printf("Tabuada/n");
    printf("------/n");
    printf(" Digite o numero que voce gostaria de receber: ");
    scanf("%d", &numero);
    /* Estrutura LOOP FOR (FOR)
    *for(int i = 0; i < limite; i--){
        printf("%d", i); }
    */
    

    // Estrutura While
    int i = 0;
    while(i < limite){ 
        //printf("%d", i);
        int resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado);
        i = i + 1; // ou i++
    }

    /* Estrutura DO-WHILE
    Ele executa e testa o código pelo menos uma vez
    */
    int i = 0;
    do{
        int resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado);
        i = i + 1;
    }while(i < limite);

    return 0;

}