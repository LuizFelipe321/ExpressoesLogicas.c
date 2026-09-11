#include <stdio.h>

int main(){

    float num; //declara variavel float

    printf("Digite um numero:"); //pede ao usuario para digitar um numero
    scanf("%f", &num); // registra na variavel o valor digitado pelo usuario

    if (num == 0){ // condicao se varivel num receber do usuario valor = 0
        printf("Esse numero eh nulo"); //exibe mensagem na tela
    }
    if(num > 0){ //se usuario digitou como num > 0
        printf("Numero positivo"); //exibe mensagem na  tela
    }
    if(num < 0){ // se num receber valor menor que 0

        printf("Numero negativo"); // exibe mensagem na tela
    }

    return 0; // encerra o programa
}
