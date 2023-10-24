 #include <stdio.h>
 #include <locale.h>


int main (){

 setlocale(LC_ALL, "portuguese");
 int i;
 float nota;
 int soma = 0;
 float media;

 for(i = 1; i <= 3; i++)
{
  do{
   printf("Indique sua  nota:");
   scanf("%f", &nota);
  } while (nota <0 ||nota  > 10);
  soma+= nota;
 }

 media= soma/ i;
 printf("Média: %.1f\n", media);

 if(media >= 7)
 {
    printf("Aprovado\n");
 }
else if (media>= 5)
{
    printf("Recuperação\n");
}
  else 
  {
    printf(" Reprovado\n");
  
  }    
    
 return 0;
}