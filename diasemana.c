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
        printf("Ter�a");
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
        printf("S�bado");
        break;
     default:
        printf("Dia inv�lido.");

    } 


    return 0;

}