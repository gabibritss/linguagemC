#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

int main()
{
    float nota1;
    float nota2;
    float media;

    setlocale(LC_ALL, "portuguese");

    do
    {
        printf("Digite sua primeira nota:");
        scanf("%f", &nota1);

    } while (nota1 < 0 || nota1 > 10);

    do
    {
        printf("Digite sua segunda nota:");
        scanf("%f", &nota2);
    }
    while (nota2 < 0 || nota2 > 10);

    {

        media = (nota1 + nota2) / 2;

        printf("Nota: %1.f \n", nota1);
        printf("Nota: %1.f \n", nota2);
        printf("Média: %1.f \n", media);
    }

    return 0;
}