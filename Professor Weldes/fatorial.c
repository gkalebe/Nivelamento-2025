#include <stdio.h>

int main(void) {

    int N, fatorial = 1;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);
    
        for (int i = 1; i <= N; i++) {
            fatorial *= i;
        }
    
                printf("O fatorial de %d é: %d\n", N, fatorial);

}
