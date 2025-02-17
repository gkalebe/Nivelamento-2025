#include <stdio.h>

int main() {
    int num, soma = 0, contador = 0;
    
    printf("Digite números inteiros positivos (digite um número negativo para parar): ");
    scanf("%d", &num);
    
    while (num >= 0) {
        soma += num;
        contador++;
        printf("Digite outro número: ");
        scanf("%d", &num);
    }
    
    if (contador > 0) {
        printf("A média dos números inseridos é: %.2f\n", (float)soma / contador);
    } else {
        printf("Nenhum número positivo foi inserido.\n");
    }
    
    return 0;
}
