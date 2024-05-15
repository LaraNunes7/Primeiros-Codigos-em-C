#include <stdio.h>
#include <stdlib.h>

int main() {
    float media1, media2, media3, media4;

    // Solicita ao usuário que insira as quatro notas
    printf("Digite a primeira media: ");
    scanf("%f", &media1);

    printf("Digite a segunda media: ");
    scanf("%f", &media2);

	printf("Digite a terceira media: ");
	scanf("%f", &media3);
	
	printf("Digite a quarta media: ");
	scanf("%f", &media4);
	

    // Calcula a pontuação total
    float pontuacaoMedia = media1 + media2 + media3 + media4;

    // Exibe a pontuação total
    printf("A media do aluno: %f",pontuacaoMedia); 

    return 0;
}

  
