#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main(){
   
    setlocale(LC_ALL,"portuguese");
   
    int codigo;
    char prato[200];
    float preco;
   
    printf("--------------- MENU --------------- \n");
    printf("1 \t Picanha \t R$ 25,00 \n");
    printf("2 \t Lasanha \t R$ 20,00 \n");
    printf("3 \t Strogonoff \t R$ 18,00 \n");
    printf("4 \t Bife Acebolado  R$ 15,00 \n");
    printf("5 \t Pão com ovo \t R$ 5,00 \n");
    printf("--------------- FIM --------------- \n");
    printf("Escolha uma das opções acima:");
    scanf("%d",&codigo);
   
    switch(codigo) {
        case 1 :
            // String copy == str cpy
            strcpy(prato, "Picanha");
            preco = 25.00;
            break;
        case 2 :
            strcpy(prato, "Lasanha");
            preco = 20.00;
            break;
        case 3 :
            strcpy(prato, "Strogonoff");
            preco = 18.00;
            break;
        case 4 :
            strcpy(prato, "Bife Acebolado");
            preco = 15.00;          
            break;
        case 5 :
            strcpy(prato, "Pão com ovo");
            preco = 5.00;          
            break;
        default :
            printf("Opção inválida!");
    }
   
    printf("Código: %d \n", codigo);
    printf("Prato: %s \n", prato);
    printf("Preço: %.2f \n", preco);

    return 0;
}