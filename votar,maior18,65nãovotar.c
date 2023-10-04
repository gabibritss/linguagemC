#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   
setlocale (LC_ALL,"portuguese");

int idade;

//solicitando dados
printf("Digite sua idade:");
scanf("%d",&idade);

if (idade>= 18 && idade <= 65) {
    printf ("Obrigado a votar!");
} else{
    printf("Não é obrigado a votar!");
}

/*
outra maneira usando ou = ||

if (idade< 18 || idade > 65) {
    printf ("Não é obrigado a votar!");
} else{
    printf("Obrigado a votar!");
}

*/



return 0;
}
