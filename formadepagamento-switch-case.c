#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <ctype.h>

int main(){
   
    setlocale(LC_ALL,"portuguese");
   
    int opcao;
    int parcelas;
    float precoProduto;
    float desconto;
    float precoParcelado;
    float precoFinal;

    printf("Digite o valor do produto: ");
    scanf("%f",&precoProduto);

    printf("Escolha uma das formas de pagamento abaixo. \n");
    printf("1 - pagamento a vista \n");
    printf("2 - pagamento a prazo \n");
    printf("Informe a opção desejada: ");
    scanf("%d",&opcao);

    switch (opcao) {
    case 1 :
        desconto = precoProduto * 0.10;
        precoFinal = precoProduto - desconto;

        printf("\nPreço do produto: R$ %.2f \n", precoProduto);
        printf("Forma de pagamento: a vista \n");
        printf("Valor do desconto: R$ %.2f \n", desconto);
        printf("Total a pagar: R$ %.2f \n", precoFinal);

        break;
    case 2 :
        do {    
            printf("\nDigite a quantidade de parcelas: ");
            scanf("%d",&parcelas);      

            if (parcelas > 6) {
                printf("Parcelamento em até 6 vezes. \nTente novamente...\n");
            }
        } while (parcelas > 6);

        precoParcelado = precoProduto / parcelas;
        precoFinal = precoProduto;

        printf("\nPreço do produto: R$ %.2f \n", precoProduto);
        printf("Forma de pagamento: a prazo \n");
        printf("Quantidade de parcelas: %d \n", parcelas);
        printf("Valor por parcela: R$ %.2f \n", precoParcelado);
        printf("Total a prazo: R$ %.2f \n", precoFinal);
        break;
    default:
        printf("Opção inválida!");
    }

    return 0;
}
