#include <stdio.h>


void aplicarDesconto(float *preco, float desconto) {
    *preco -= *preco * desconto / 100; 
}

int main() {
    float precoOriginal, precoFinal, desconto;

   
    printf("Digite o preço do produto: R$ ");
    scanf("%f", &precoOriginal);

    
    printf("Digite o valor do desconto (em porcentagem): ");
    scanf("%f", &desconto);

    
    precoFinal = precoOriginal;

    
    aplicarDesconto(&precoFinal, desconto);

    printf("\nPreço original: R$ %.2f\n", precoOriginal);
    printf("Desconto aplicado: %.2f%%\n", desconto);
    printf("Preço final após desconto: R$ %.2f\n", precoFinal);

    return 0;
}
