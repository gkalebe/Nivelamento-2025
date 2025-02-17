#include <stdio.h>
#include <stdlib.h>

int main(void){
    int idade;

        printf("Digite sua idade: ");
        scanf("%d", &idade);

            if(idade < 18){
                printf ("menor de idade");
            }if(idade <=59 ){
                printf("Adulto");
            }else{
                printf("Idoso");
            }
}