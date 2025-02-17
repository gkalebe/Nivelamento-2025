#include <stdio.h>

int main(void){
    int nota;

    printf("Insira a nota de 0 a 10: ");
    scanf("%d", &nota);

    if(nota >= 9 && nota <= 10){
        printf("Nota excelente.");
        }else if(nota >= 7 && nota < 9){
            printf("Nota boa.");
            }else if(nota >= 5 && nota < 7){
                printf("Nota regular.");
                }else if(nota >= 0 && nota < 5){
                    printf("Nota insuficiente.");
                    }else{
                        printf("Valor fora da faixa de 0 a 10.");
    }

    return 0;
}
