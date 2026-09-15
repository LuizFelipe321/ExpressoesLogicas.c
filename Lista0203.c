int main(){

    int preco, mult, quantidade;
    float valor;

    printf("Digite 0 - PARA VALORES A BAIXO DE 100 UNIDADES: \n Digite 1 - PARA VALORES A CIMA DE 100 UNIDADES: ");
    scanf("%d", &preco);

    switch(preco){

    case 0:
        printf("Digite a quantidade necessaria:");
        scanf("%d", &quantidade);
        valor = 0.25;
        mult = quantidade * valor;
        printf("VALOR TOTAL GASTO: %d ", mult);
        break;
    case 1:
        printf("Digite a quantidade necessaria:");
        scanf("%d", &quantidade);
        valor = 0.20;
        mult = quantidade * valor;
        printf("VALOR TOTAL GASTO: %d ", mult);
        break;
    default:
        printf("Valor quantidade eh invalido");
    }
    return 0;
}
