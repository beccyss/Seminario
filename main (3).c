#include <stdio.h>
#include <math.h> // Inclua a biblioteca math.h para usar a função sqrt()

int main(void) {
    int n = 0;
    int expoente = 0; // Variável para armazenar o expoente

    printf("Digite o número que deseja calcular a raiz: ");
    scanf("%d", &n);
    printf("Digite o expoente da raiz: ");
    scanf("%d", &expoente); // Leia o valor do expoente

    double resultado = pow(n, 1.0 / expoente); // Use a função pow() para calcular a raiz com o expoente

    printf("O resultado é: %.2f\n", resultado); // Exiba o resultado

    return 0;
}
