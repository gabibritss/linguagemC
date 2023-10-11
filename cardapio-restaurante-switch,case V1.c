#include <stdio.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "portuguese");

    int codigo;


    printf("-------------MENU------------\n");
    printf("1  | Picanha  | R$25,00\n");
    printf("2  | Lasanha  | R$20,00\n");
    printf("3  | Strogonoff  | R$18,00\n");
    printf("4  | Bife acebolado  | R$15,00\n");
    printf("5  | Pão com ovo | R$5,00\n");
    printf("-------------FIM------------\n");


    printf("Digite o código do seu prato:\n");
    scanf("%d", &codigo);

    switch (codigo)
    {
     case 1:
        printf("Picanha | R$25,00");
        break;
     case 2:
        printf("Lasanha | R$20,00");
        break;
     case 3:
        printf("Strogonoff | R$18,00");
        break;
     case 4:
        printf("Bife acebolado | R$15,00");
        break;
     case 5:
      printf("Pão com ovo | R$5,00");
        break;
     default:
       printf("Opção inválida");

        return 0;
    }
}
