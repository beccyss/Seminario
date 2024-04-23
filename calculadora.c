// Calculadora Básica: crie operações de soma, subtração, multiplicação, divisão, potência e raiz.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
  float valor1, valor2;
  int operador;
  float res;

  printf("Digite o primeiro valor: ");
  scanf("%f", &valor1);
  printf("Digite o segundo valor: ");
  scanf("%f", &valor2);

  if (valor2 == 0){
    printf("Os operadores possíveis para realizar os cálculos são: \n1 - Soma\n2 - Subtração\n3 - Multiplicação");
    }
  else
    printf("Os operadores possíveis para realizar os cálculos são: \n1 - Soma\n2 - Subtração\n3 - Multiplicação\n4 - Divisão\n");
  
  printf("Digite o operador: ");
  scanf("%d", &operador);
  
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
  }

  if (operador == 2){
    res = valor1 - valor2;
  }

  if (operador == 3){
    res = valor1 * valor2;
  }

  if (operador == 4){
    res = valor1 / valor2;
  }

  printf("O resultado é: %.2f", res);

  return 0;
}
