#include <stdio.h>
#include <locale.h>

int main(){

    setlocale(LC_ALL, "portuguese");
    int i;
    int numero;

    printf("Digite um n�mero:");
    scanf("%d", &numero);

    if (numero% 2 ==0) {
        printf("%d � �mpar.\n", numero);
    } else {
        printf("%d � par.\n", numero);
    }
    
    
    return 0;
     }
