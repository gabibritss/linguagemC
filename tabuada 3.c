#include <stdio.h>
#include <locale.h>



int main(){

    setlocale(LC_ALL,"portuguese");
    int i;



// i= i +1
// i++
// para i de 1 ate 10 passo 1 faca 


    for (i = 1; i <= 10; i++) {
    
        printf("3 x %d = %d \n", i, 3 * i);
        printf("\n");
    }

    for (i = 1; i <= 10; i++) {
    
        printf("4 x %d = %d \n", i, 4 * i);
        printf("\n");
    }

    for (i = 1; i <= 10; i++) {
    
        printf("5 x %d = %d \n", i, 5 * i);
    }


    
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}