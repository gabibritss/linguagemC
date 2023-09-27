#include <stdio.h>
#include <stdlib.h>

int main()
{

    char nome[300];
    float media;
    float nota1, nota2;

    printf("Digite seu nome:");
    gets(nome);

    printf("Digite sua primeira nota:");
    scanf("%f", &nota1);

    printf("Digite sua segunda nota:");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    system("cls || clear"); // limpa tela

    printf("Nome:%s\n", nome);
    printf("Primeira nota: %f \n", nota1);
    printf("Primeira segunda: %f \n", nota2);
    printf("Média: %f \n", media);

    if (media >= 7)
    {

        printf("Aprovado");
    }

    else if (media <= 7){
        printf("Reprovado");
    }

    return 0;
}
