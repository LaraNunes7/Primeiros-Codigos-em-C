#include <stdio.h>

int main() {
    double peso_prato;
    const double preco_por_quilo = 45.00;

    // Solicita ao usuário para inserir o peso do prato em quilos
    printf("Digite o peso do prato montado pelo cliente (em quilos): ");
    scanf("%lf", &peso_prato);

    // Calcula o valor a pagar pelo prato
    double valor_a_pagar = peso_prato * preco_por_quilo;

    // Exibe o valor a pagar
    printf("O valor a pagar pelo prato e: R$ %.2f\n", valor_a_pagar);

    return 0;
}
