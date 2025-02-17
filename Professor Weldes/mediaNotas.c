#include <stdio.h>

int main(void) {
    float nota, soma = 0, media;
    int contador = 0;
    
    do {
        printf("Digite uma nota (ou -1 para parar): ");
        scanf("%f", &nota);
        
        if (nota != -1) {
            soma += nota;
            contador++;
        }
    } while (nota != -1);
    
    if (contador > 0) {
        media = soma / contador;
        printf("A média das notas é: %.2f\n", media);
    } else {
        printf("Nenhuma nota foi inserida.\n");
    }
    
    return 0;
}
