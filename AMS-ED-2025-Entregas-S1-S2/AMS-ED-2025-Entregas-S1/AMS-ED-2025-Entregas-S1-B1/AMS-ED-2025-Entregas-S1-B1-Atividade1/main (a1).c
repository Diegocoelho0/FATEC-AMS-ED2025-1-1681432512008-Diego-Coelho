/*----------------------------------------------------------------------------------*/
/*   FATEC-São Caetano do Sul                 Estrutura de Dados                    */
/*                         Id da Atividade: S1-B1-B2                                */
/*             Objetivo: Implementação de um sistema para seleção de residência    */
/*                        médica, utilizando vetores e ponteiros.                  */
/*                                                                                  */
/*                                  Autor: diego coelho                             */
/*                                                                    Data:03/03/2025*/
/*----------------------------------------------------------------------------------*/
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
