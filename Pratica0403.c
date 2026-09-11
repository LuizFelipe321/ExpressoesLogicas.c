#include <stdio.h>

int main(){

    float num;

    printf("Digite um numero:");
    scanf("%f", &num);

    if (num == 0){
        printf("Esse numero eh nulo");
    }
    if(num > 0){
        printf("Numero positivo");
    }
    if(num < 0){

        printf("Numero negativo");
    }

    return 0;
}
