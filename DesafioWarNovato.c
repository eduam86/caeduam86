#include <stdio.h>
#include <string.h>

// Criação da struct Territorio
// Esta estrutura armazena os dados de um território
struct Territorio {
    char nome[30];
    char cor[10];
    int  tropas;
} ;

int main (){

// Declaração do vetor de structs para 5 territórios
    struct Territorio territorios[5];

int i;

printf("=== CADASTRO DE TERRITÓRIOS - NÍVEL NOVATO ===\n\n");

// Entrada de dados
    for (i = 0; i < 5; i++) {
        printf("Território %d\n", i + 1);

        printf("Digite o nome do território: ");
        scanf(" %29[^\n]", territorios[i].nome);

        printf("Digite a cor do exército: ");
        scanf(" %9s", territorios[i].cor);

        printf("Digite a quantidade de tropas: ");
        scanf("%d", &territorios[i].tropas);

        printf("\n");
    }

    // Exibição dos dados cadastrados
    printf("=== TERRITÓRIOS CADASTRADOS ===\n\n");

    for (i = 0; i < 5; i++) {
        printf("Território %d\n", i + 1);
        printf("Nome: %s\n", territorios[i].nome);
        printf("Cor do Exército: %s\n", territorios[i].cor);
        printf("Quantidade de Tropas: %d\n", territorios[i].tropas);
        printf("-----------------------------\n");
    }

    return 0;
}