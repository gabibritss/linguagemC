#include <stdio.h>
#include <locale.h>


int main (){



setlocale(LC_ALL,"portuquese");

int n1, n2, n3;
int maior, menor;

printf("Digite o primeiro número:");
scanf("%d",&n1);

printf("Digite o segundo número:");
scanf("%d",&n2);

printf("Digite o terceiro número:");
scanf("%d",&n3);

// operaÃ§Ã£o
maior= n1>n2? n1:n2;
maior= maior>n3? maior:n3;

menor= n1<n2?n1:n2;
menor=menor<n3? menor:n3;

printf("\nMaior número: %d \n", maior);
printf("Menor número:%d \n", menor);


return 0;
}
