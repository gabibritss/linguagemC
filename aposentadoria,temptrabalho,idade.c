#include <stdio.h>
#include <locale.h>

int main() {

setlocale (LC_ALL,"portuguese");
    int codigo;
    int datanasci,idade;
    int temptrabalho;
// dados do usuario
    printf("Digite seu código:");
    scanf ("%d",&codigo);

     printf ("Digite sua data de nascimento:");
    scanf ("%d",&datanasci);

 printf ("Digite seu tempo de trabalho:");
    scanf ("%d",&temptrabalho);

// if else, condição

if (idade>= 65 || temptrabalho>= 30) {
printf ("Requer aposentadoria");
 } else {
prinf("Não requer aposentadoria");    
 }

    return 0;
}