#include <stdio.h>
#include <locale.h>

int main (){

    setlocale(LC_ALL,"portuguese");


    int numero;
    int i;
    int soma,par=0,impar=0;
 for(i=1; i<=5; i++) 
 {
    printf("Digite o número:\n",i);
    scanf("%d",&numero);



 if (numero% 2 ==0) {
    par++;
        
    } else {
       impar++; 
// numero% 2 == 0 ? par++ : impares++;

}

  }


    printf("pares:%d\n",par);
    printf("ímpares:%d\n",impar);
    
    
    return 0;
}