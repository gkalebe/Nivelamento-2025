#include <stdio.h>

int main(void) {
    int N, i = 1, soma = 0;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);
    
        while (i <= N) {
            soma += i * i;
            i++;
        }
    
    printf("A soma dos quadrados de 1 a %d é: %d\n", N, soma);
   
}
