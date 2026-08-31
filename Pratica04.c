#include <stdio.h>

int main(){

    int a = 5, b = 10; // a = 5 e b = 10;

    printf("(a < b) && (b > 0): %d\n", (a < b) && (b > 0)); // PRIMEIRO -> VERDADEIRO e SEGUNDO -> VERDADEIRO => "1";

    printf("(a > b) || (b > 0): %d\n", (a > b) || (b > 0)); // PRIMEIRO -> FALSO ou SEGUNDO -> VERDADEIRO => "1";

    printf("!(a < b): %d\n", !(a < b)); // PRIMEIRO -> VERDADEIRO - !VERDADEIRO => FALSO => "0";

    return 0;
}
