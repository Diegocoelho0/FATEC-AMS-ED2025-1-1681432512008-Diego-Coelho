/*----------------------------------------------------------------------------------*/
/*   FATEC-São Caetano do Sul                 Estrutura de Dados                    */
/*                         Id da Atividade: S1-B1-B2                                */
/*             Objetivo: Implementação de um sistema para seleção de residência    */
/*                        médica, utilizando vetores e ponteiros.                  */
/*                                                                                  */
/*                                  Autor: diego coelho                             */
/*                                                                    Data:06/05/2025*/
/*----------------------------------------------------------------------------------*/
#include <stdio.h>

// Função para imprimir o vetor
void imprimirVetor(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Função Bubble Sort com detalhamento de cada passo
int bubbleSort(int arr[], int n) {
    int i, j, temp;
    int trocas = 0;

    printf("\nProcesso de ordenação (Bubble Sort):\n");
    for (i = 0; i < n - 1; i++) {
        printf("Iteração %d: ", i + 1);
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Troca os elementos
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                trocas++;
            }
        }
        imprimirVetor(arr, n);
    }

    return trocas;
}

int main() {
    int n, i;

    // Entrada de dados
    printf("Informe a quantidade de elementos: ");
    scanf("%d", &n);

    int numeros[n];

    printf("Digite os %d elementos:\n", n);
    for (i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("\nEntrada: ");
    imprimirVetor(numeros, n);

    // Processamento
    int totalTrocas = bubbleSort(numeros, n);

    // Saída
    printf("\nSaída: ");
    imprimirVetor(numeros, n);
    printf("Total de trocas realizadas: %d\n", totalTrocas);
    printf("Fim do programa.\n");

    return 0;
}
