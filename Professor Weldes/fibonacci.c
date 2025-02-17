#include <stdio.h>

int main(void) {
    int N, a = 0, b = 1, temp, count = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &N);
    
    while (count < N) {

        printf("%d ", a);
        temp = a + b;
        a = b;
        b = temp;
        count++;

    }
}
