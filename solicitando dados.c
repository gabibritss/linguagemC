#include <stdio.h>
#include <stdlib.h>
//#include <string.h>
int main()
{
    // declarando variaveis.
    int idade;
    char sexo[200];
    float peso;
    char nome[300];

    // solicitando dados para o usuario.
   
    printf("Digite seu nome:");
    gets(nome);


// ou fgets(nome,300,stdin);
//nome[strcspn(nome,"\n")] = 0;
//scanf("%s",&nome);


    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("digite seu sexo: ");
    scanf("%s", &sexo);

    fflush(stdin); // limpa o cache de input.

    printf("digite seu peso: ");
    scanf("%f", &peso);

    system("cls || clear"); // limpa tela

    // Exibindo dados do usuario.
    printf("nome: %s\n", nome);
    printf("idade: %d anos\n", idade);
    printf("sexo: %s\n", sexo);
    printf("peso: %.2f kg \n", peso);

    return 0;
}
