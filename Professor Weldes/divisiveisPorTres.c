#include <stdio.h>

int main(void) {
    int num = 1, count = 0;
    
    while (num <= 100) {
        if (num % 3 == 0) {
            count++;
        }
        num++;
    }
    
    printf("Quantidade de números entre 1 e 100 divisíveis por 3: %d\n", count);
    return 0;
}
