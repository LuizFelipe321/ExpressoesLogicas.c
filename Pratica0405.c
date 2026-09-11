#include <stdio.h>

int main(){

    int a, b; // declaracao de variaveis inteiro

    printf("Digite o valor de A:"); // pede ao usuario primeiro numero
    scanf("%d", &a); //registra na variavel o que o usuario digitou

    printf("Digite o valor de B:"); //pede ao usuario o segundo numero
    scanf("%d", &b); // registra na variavel o que o usuario digitou
    if (b == 0){ // caso b ( segundo valor - divisor) receba valor 0
        printf("O segundo valor nunca pode ser 0, pois nao existe");
    }
    else if( a % b == 0 ){ // condicao dentro da condicao if, casp resto da divisao o resultado seja 0
        printf("Os valores sao divisiveis"); // exibe mensagem ao usuario
    } else{ //caso condicao if nao seja atendida
    printf("Os valores nao sao divisiveis"); // exibe mensagem ao usuario
    }

    return 0; // encerra o programa com sucesso
    }
