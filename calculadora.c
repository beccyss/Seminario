// Calculadora Básica: crie operações de soma, subtração, multiplicação, divisão, potência e raiz.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  float valor1, valor2;
  int operador;
  float res;

  printf("Os operadores possíveis para realizar os cálculos são: \n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n5 - Logaritmo\n6 - Radiciação\n7 - Potenciação");

  printf("\nDigite o operador: ");
  scanf("%d", &operador);

  if (operador <= 4){
  printf("Digite o primeiro valor: ");
  scanf("%f", &valor1);
  printf("Digite o segundo valor: ");
  scanf("%f", &valor2);
  
  while (operador == 0){
    printf( "Operador inválido, digite novamente: ");
    scanf("%d", &operador);
  }

  while (valor2 == 0 && operador >= 4 ){
    printf( "Operação não disponível para esses valores, digite novamente: ");
    scanf("%d", &operador);
  }

  if (operador == 1){
    res = valor1 + valor2;
    printf("O resultado é: %.2f", res);
  }

  if (operador == 2){
    res = valor1 - valor2;
    printf("O resultado é: %.2f", res);
  }

  if (operador == 3){
    res = valor1 * valor2;
    printf("O resultado é: %.2f", res);
  }

  if (operador == 4){
    res = valor1 / valor2;
    printf("O resultado é: %.2f", res);
  } 
  } else {
  
 int n = 0;

  if (operador == 6) {
    int expoente = 0; // Variável para armazenar o expoente

    printf("\nDigite o número que deseja calcular a raiz: ");
    scanf("%d", &n);
    printf("\nDigite o expoente da raiz: ");
    scanf("%d", &expoente); // Leia o valor do expoente

    double resultado = pow(n, 1.0 / expoente); // Use a função pow() para calcular a raiz com o expoente

    printf("O resultado é: %.2f\n", resultado); // Exiba o resultado
  }

  //log

  double base, n1;

    if (operador == 5) { 
    printf("Insira o número: ");
    scanf("%lf", &n1);

    double total = log(n1);

    printf("Resultado: %.2lf\n", total);
    }
    
    if (operador == 7) { 
  int x=0, n=0, resultado=0;

  printf("\nPara realizar o cálculo de potência é necessário que você insira dois valores para X e N. Onde X é a base e N o expoente.");
  printf("\n\nValor de X:");
  scanf("%d", &x);
  printf("\nValor de N:");
  scanf("%d", &n);

  resultado=pow(x,n);

  printf("\n\nO resultado de %d elevado a %d é: %d", x, n, resultado);
  }
  }

  return 0;
}
