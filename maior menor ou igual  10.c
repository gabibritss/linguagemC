#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
  setlocale(LC_ALL, "português"); 
    //permitindo acentuação 
       
    
    //declarando váriaveis
    int valor;

    printf("Digite um valor \n");
    scanf("%d",&valor);

    //Exibindo dados para o usúario
     if(valor>10){

      printf("È maior que 10\n");
     }
else{
  printf("È menor que 10\n");
}
return 0; 

} 

