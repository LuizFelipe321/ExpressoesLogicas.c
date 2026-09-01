#include <stdio.h>

int main(){

    int x, y;

    printf("Digite dois numeros:");
    scanf("%d %d", &x, &y); // Escreva dois numeros

    printf("x > y: %d\n", x > y); // Compara se X é MAIOR que Y

    printf("x == y: %d\n", x == y); // Compara se X POSSUEM O MESMO VALOR 

    printf("x != y: %d\n", x != y); // Compara se X POSSUI VALOR DIFERENTE de Y

    return 0;
    
    // CASO SEJA VERDADEIRO => 1
    
    // CASO SEJA FALSO => 0

}
