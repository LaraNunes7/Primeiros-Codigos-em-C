#include <stdio.h>
#include <math.h>

#define PI 3.14159265359

int main() {
    double raio, diametro, comprimento, area;

    // Solicita ao usuário para inserir o valor do raio
    printf("Digite o valor do raio da circunferencia: ");
    scanf("%lf", &raio);

    // Calcula o diâmetro, comprimento e área da circunferência
    diametro = 2 * raio;
    comprimento = 2 * PI * raio;
    area = PI * pow(raio, 2);

    // Exibe o diâmetro, comprimento e área da circunferência
    printf("Diâmetro: %.2f\n", diametro);
    printf("Comprimento: %.2f\n", comprimento);
    printf("Área: %.2f\n", area);

    return 0;
}
