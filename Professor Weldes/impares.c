#include <stdio.h>

int main(void) {
    int N, soma = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        soma += i;
    }

        printf("Soma de 1 a %d: %d\n", N, soma);
}
