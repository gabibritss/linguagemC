#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");
    float valormaca;
    int quantidade;
    float precofinal;

    printf("Digite a quantidade de ma�as:");
    scanf("%d", &quantidade);

    valormaca = quantidade > 12 ? 1.00 : 1.30;
    precofinal = valormaca * quantidade;

    printf("Pre�o final:%.2f",precofinal);

    return 0;
}