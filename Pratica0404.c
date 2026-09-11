#include <stdio.h> 

int main(){ 

    int num; // declaracao da variavel como valor inteiro

    printf("Digite um numero:");
    scanf("%d", &num);

    if (num % 2 == 0){ // Se resto da divisao por dois resultar (receber como resultado) em valor 0
        printf("Esse numero eh par!"); // diz que o numero eh par
    } else {
        printf("Esse numero eh impar!"); // caso ao contrario esse numero eh impar
        }

    return 0; // encerra o programa
}
