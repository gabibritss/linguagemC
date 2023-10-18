#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");
    int i;
    int numero;

    printf("Digite um número para a tabuada:");
    scanf("%d", &numero);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d \n", numero, i, numero * i);
        }
    
    
    
    return 0;
     }
