#include<stdio.h>
#include<locale.h>
#include <stdlib.h>
#include <ctype.h>

int main(){
 

  setlocale(LC_ALL, "portuguese");

 float soma =0;
 float nota;
 int contador = 0;
 char resposta;
 float media;

do 
{
   printf("Digite a nota:");
   scanf("%f", &nota);
   soma+=nota;
   contador++;

   fflush(stdin);

   printf("Deseja inserir uma nova nota?");
   printf("\nS - Sim\n N - Não \n Resposta:");
   scanf("%c",&resposta);

} while ( resposta != 'N');

media = soma / contador ;

printf("Média:%.1f\n", media);


 return 0;
}
