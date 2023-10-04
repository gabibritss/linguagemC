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
 printf("Digite o primeiro número: ");
scanf("%d",&numero1);

printf("Digite o segundo número: ");
scanf("%d",&numero2);

// calculo 
soma= (numero1+numero2);
media= (numero1+numero2)/2;
produto= (numero1*numero2) ;

// outra maneira if e else operaÃ§Ã£o ternÃ¡ria 
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
printf("Primeiro número:%d\n",numero1);
printf("Segundo número:%d\n",numero2);
printf("Média:%f\n",media);
printf("Soma:%d\n",soma);
printf("Produto:%d\n",produto);
printf("Menor número:%d\n",menor);
printf("Maior número:%d\n",maior);  
   

    
    
    return 0;
}