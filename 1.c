#include <stdio.h>
#include <stdlib.h>

int main() {
    float nota1, nota2, nota3, nota4;

    // Solicita ao usuário que insira as quatro notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

	printf("Digite a terceira nota: ");
	scanf("%f", &nota3);
	
	printf("Digite a quarta nota: ");
	scanf("%f", &nota4);
	

    // Calcula a pontuação total
    float pontuacaoTotal = nota1 + nota2 + nota3 + nota4;

    // Exibe a pontuação total
    printf("A pontuação total do aluno: %f",pontuacaoTotal); 

    return 0;
}

  
