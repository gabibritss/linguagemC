#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
   
setlocale (LC_ALL,"portuguese");

 float media;
 int soma;
 int produto;
 int numero1,numero2;
 int menor,maior;

// dados
 printf("Digite o primeiro n�mero: ");
scanf("%d",&numero1);

printf("Digite o segundo n�mero: ");
scanf("%d",&numero2);

// calculo 
soma= (numero1+numero2);
media= (numero1+numero2)/2;
produto= (numero1*numero2) ;

// outra maneira if e else operação ternária 
/*

maior = numero1> numero2? numero1:numero2;
menor= numero1< numero2? numero1:numero2; 


*/


if (numero1>numero2){
    maior= numero1;
    menor= numero2;
}else {
    maior= numero2;
    menor= numero1;
}


//limpa tela 
system("cls|| clear");
printf("Primeiro n�mero:%d\n",numero1);
printf("Segundo n�mero:%d\n",numero2);
printf("M�dia:%f\n",media);
printf("Soma:%d\n",soma);
printf("Produto:%d\n",produto);
printf("Menor n�mero:%d\n",menor);
printf("Maior n�mero:%d\n",maior);  
   

    
    
    return 0;
}