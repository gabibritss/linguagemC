#include<stdio.h>
#include<locale.h>


int main(){
 
 int i;
 float nota ;
 float soma= 0 ;
 float media;

  setlocale(LC_ALL, "portuguese");

for (i = 0; i < 2; i++) {

    do {
        printf("Digite a %d nota:", i + 1);
        scanf( "%f", &nota);  

    } while ( nota<0 || nota >10);

     soma+= nota;

}

    media = soma/ i;

    printf("\n Média: %.1f\n", media);

    return 0;
}