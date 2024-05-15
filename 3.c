#include <stdio.h>
#include <stdlib.h>

int main(){ 

  float comprimento, largura;

    
    printf("Digite o comprimento do retangulo em metros: ");
    scanf("%f", &comprimento);
    printf("Insira a largura do retangulo em metros: ");
    scanf("%f", &largura);

    
    float area = comprimento * largura;


     printf("A area do retangulo e: %f",  area / 2 ," metros quadrados.");

    return 0;
}
  
