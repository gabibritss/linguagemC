#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()


{

    int dias;

    printf("Escolha um dia da semana:");
    scanf("%d", &dias);

    switch (dias)
    {
     case 1:
        printf("Domingo");
        break;
     case 2:
        printf("Segunda");
        break;
     case 3:
        printf("Terça");
        break;
     case 4:
        printf("Quarta");
        break;
     case 5:
        printf("Quinta");
        break;
     case 6:
        printf("Sexta");
        break;
     case 7:
        printf("Sábado");
        break;
     default:
        printf("Dia inválido.");

    } 


    return 0;

}