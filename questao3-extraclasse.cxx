#include <stdio.h>

int somar_digitos(int n) {
    int soma = 0;
    if (n < 0) {
        n = -n; 
    }

    while (n > 0) {
        soma += n % 10; 
        n /= 10;        
    }

    return soma;
}

int main() {
    int numero;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    int resultado = somar_digitos(numero);
    printf("A soma dos dígitos de %d é: %d", numero, resultado);
    
    return 0;
}