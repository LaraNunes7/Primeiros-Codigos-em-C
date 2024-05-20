#include <stdio.h>

void troca(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int valor1, valor2;

    // Solicita ao usuário para inserir os valores das variáveis
    printf("Digite o valor da primeira variavel: ");
    scanf("%d", &valor1);
    printf("Digite o valor da segunda variavel: ");
    scanf("%d", &valor2);

    // Exibe os valores originais das variáveis
    printf("Valor antigo da primeira variavel: %d\n", valor1);
    printf("Valor antigo da segunda variavel: %d\n", valor2);

    // Chama a função para trocar os valores das variáveis
    troca(&valor1, &valor2);

    // Exibe os novos valores das variáveis
    printf("Novo valor da primeira variavel: %d\n", valor1);
    printf("Novo valor da segunda variavel: %d\n", valor2);

    return 0;
}
