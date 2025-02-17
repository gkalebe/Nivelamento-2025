#include <stdio.h>

int main() {
    int num, i = 2;
    int primo = 1;
    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &num);
    
    while (i <= num / 2) {
        if (num % i == 0) {
            primo = 0; 
            break;
        }
        i++;
    }
    
    if (primo && num > 1)
        printf("%d é um número primo.\n", num);
    else
        printf("%d não é um número primo.\n", num);
    
    return 0;
}
