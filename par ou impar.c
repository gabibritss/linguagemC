#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");
    int i;
    int numero;

    printf("Digite um número:");
    scanf("%d", &numero);

    if (numero% 2 ==0) {
        printf("%d é ímpar.\n", numero);
    } else {
        printf("%d é par.\n", numero);
    }
    
    
    return 0;
     }
