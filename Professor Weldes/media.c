#include <stdio.h>

int main(void) {

    int N, num, soma = 0, count = 0;
    float media;
    
    printf("Digite a quantidade de números: ");
    scanf("%d", &N);
    
    int i = 0;
    while (i < N) {
        printf("Digite um número: ");
        scanf("%d", &num);
        soma += num;
        count++;
        i++;
    }
    
    if (count > 0) {
        media = (float)soma / count;
        printf("A média dos números é: %.2f\n", media);
    } else {
        printf("Nenhum número foi inserido.\n");
    }
    
    return 0;
}