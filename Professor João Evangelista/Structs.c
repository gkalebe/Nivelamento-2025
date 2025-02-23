#include <stdio.h>
#include <stdlib.h>

#define MAX_VOTOS 99

typedef struct {
    int qv;
    int cod[MAX_VOTOS];
} Ling;

void inicializar(Ling *ling) {
    ling->qv = 0;
    for (int i = 0; i < MAX_VOTOS; i++) {
        ling->cod[i] = 0;
    }
}

void registrar_voto(Ling *ling, int codigo) {
    if (ling->qv < MAX_VOTOS) {
        ling->cod[ling->qv] = codigo;
        ling->qv++;
    } else {
        printf("Limite de votos atingido para esta linguagem!\n");
    }
}

void exibir_resultados(Ling java, Ling php, Ling c) {
    printf("\nResultado da votacao:\n");
    printf("Java: %d votos\n", java.qv);
    printf("PHP: %d votos\n", php.qv);
    printf("C: %d votos\n", c.qv);
    
    Ling *maior = &java;
    if (php.qv > maior->qv) maior = &php;
    if (c.qv > maior->qv) maior = &c;
    
    printf("Linguagem com mais votos: ");
    if (maior == &java) printf("Java\n");
    else if (maior == &php) printf("PHP\n");
    else printf("C\n");
    
    printf("Codigo dos Vontantes:\n");
    printf("Java: ");
    for (int i = 0; i < java.qv; i++) printf("%d ", java.cod[i]);
    printf("\n");
    
    printf("PHP: ");
    for (int i = 0; i < php.qv; i++) printf("%d ", php.cod[i]);
    printf("\n");
    
    printf("C: ");
    for (int i = 0; i < c.qv; i++) printf("%d ", c.cod[i]);
    printf("\n");
}

int main() {
    Ling java, php, c;
    inicializar(&java);
    inicializar(&php);
    inicializar(&c);
    
    int continuar = 1;
    while (continuar) {
        int opcao, codigo;
        printf("\nEscolha a linguagem para votar:\n1 - Java\n2 - PHP\n3 - C\nOp\xE7\xE3o: ");
        scanf("%d", &opcao);
        
        if (opcao < 1 || opcao > 3) {
            printf("Opcao Invalida!!! \n");
            continue;
        }
        
        printf("Digite seu codigo de votacao: ");
        scanf("%d", &codigo);
        
        switch (opcao) {
            case 1: registrar_voto(&java, codigo); break;
            case 2: registrar_voto(&php, codigo); break;
            case 3: registrar_voto(&c, codigo); break;
        }
        
        printf("Deseja continuar votando? (1 - Sim, 0 - Nao): ");
        scanf("%d", &continuar);
    }
    
    exibir_resultados(java, php, c);
    
    printf("\nPressione qualquer tecla para sair...\n");
    getchar();
    getchar();
    return 0;
}