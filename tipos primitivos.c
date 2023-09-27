#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade = 20;    // inteiro
    float peso = 80.26; // real
    char sexo = 'F'; //apenas um caracter
    char nome [200] = "gabis"; //cadeia de caracteres  

    printf("idade: %d anos.\n", idade);
    printf("peso: %.2f kg.\n", peso);
    printf ("sexo: %c \n", sexo);
    printf ("Nome: %s \n", nome);
    return 0;
}