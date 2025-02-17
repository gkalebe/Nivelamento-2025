#include <stdio.h>
#include <stdlib.h>

int main(void){
    int num1, num2;
        char operacao;

        printf("Digite seus dois numeros: ");
        scanf("%d %d", &num1, &num2);

            printf("Digite a operação: ");
            scanf(" %c", &operacao);

            switch (operacao){
                case '+':
                    printf("A soma é: %d", num1 + num2);
                        break;
                case '-':
                    printf("A subtracao e: %d", num1 - num2);
                        break;
                case '*':
                    printf("a multiplicacao e: %d", num1 * num2);
                        break;
                case '/':
                    printf("A divisao e: %d", num1 / num2);
                        break;

            default:
                printf("Erro.");

            }

}