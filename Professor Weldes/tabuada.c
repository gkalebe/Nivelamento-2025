#include <stdio.h>

int main(void) {
    int num;

    printf("Digite um número para ver a tabuada: ");
    scanf("%d", &num);

    for (int i = 1; i <= 10; i++) {
        printf("%d x %d = %d\n", num, i, num * i);
    }

}
