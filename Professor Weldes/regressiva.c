#include <stdio.h>

int main(void) {
    int num;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    
    do {
        printf("%d ", num);
        num--;

    } while (num >= 0);

}
