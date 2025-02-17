#include <stdio.h>

    int main(void){
        int numero;
            printf("Digite um numero: ");
            scanf("%d", &numero);
        if(numero % 2 == 0 ){
            printf("Seu numero %d e par. \n", numero);
        }else{
            printf("Seu numero %d e impar.", numero);
        }
        return;
    }