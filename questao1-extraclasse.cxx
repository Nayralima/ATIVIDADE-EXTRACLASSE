#include <stdio.h>
#define TAM 10

int vetor[TAM];
int soma = 0;
int maior;
int menor;
int pares;
float media; 

//calculando a media
void calcularMedia() {
    soma = 0; 
    for(int i = 0; i < TAM; i++) {
        soma += vetor[i];
    }
    media = (float)soma / TAM; 
}

int main() {
    printf("Digite 10 numeros: ");
    for(int i = 0; i < TAM; i++) {
        scanf("%d", &vetor[i]); 
    }

    calcularMedia(); 

    printf("A soma é: %d", soma);
    printf("A media é: %.2f", media); 

    return 0;
}
