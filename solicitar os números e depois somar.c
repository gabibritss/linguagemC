#include <stdio.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL,"portuguese");

    int soma = 0;
    int numero;
    int i;

 for(i=1; i<=5; i++) 
 {
    printf("Digite o número:\n");
    scanf("%d",&numero);
  
  soma += numero;
  //soma = soma + numero;
  }

    printf("Soma:%d",soma);
    
    
    
    
    
    
    
    
    
    
    return 0;
}