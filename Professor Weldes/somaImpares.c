#include <stdio.h>

int main(void) {
    int N, i = 1, soma = 0, contador = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);
    
    while (contador < N) {
        if (i % 2 != 0) {
            soma += i;
            contador++;
        }
        i++;
    }
    
    printf("A soma dos primeiros %d números ímpares é: %d\n", N, soma);
}
