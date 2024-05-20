#include <stdio.h>

int main() {
    double temperatura_fahrenheit, temperatura_celsius;

    // Solicita ao usuário para inserir a temperatura em Fahrenheit
    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%lf", &temperatura_fahrenheit);

    // Converte a temperatura de Fahrenheit para Celsius
    temperatura_celsius = (temperatura_fahrenheit - 32) / 1.8;

    // Exibe as temperaturas em Fahrenheit e Celsius
    printf("Temperatura em Fahrenheit: %.2f F\n", temperatura_fahrenheit);
    printf("Temperatura em Celsius: %.2f C\n", temperatura_celsius);

    return 0;
}
