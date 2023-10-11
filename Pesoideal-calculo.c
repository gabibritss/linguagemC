#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
    setlocale(LC_ALL, "portuguese");

    char sexo;
    float pesoideal;
    float altura;

    printf("Digite seu sexo:");
    scanf("%c", &sexo);
    printf("Digite sua altura:");
    scanf("%f", &altura);

    // condicional
    sexo = toupper(sexo); // letra maiúscula e minúscula
    switch (sexo)
    {
    case 'F':
        pesoideal = (62.1 * altura) - 44.7;
        break;
    case 'M':
        pesoideal = (72.7 * altura) - 58;
        break;

    default:
        printf("Opção inválida");
    }
    // limpa tela
    system("Clear||Cls");

    printf("Seu sexo: %2.c\n", sexo);
    printf("Seu altura: %2.f\n", altura);
    printf("Seu peso ideal é; %.3f\n", pesoideal);

    return 0;
}
