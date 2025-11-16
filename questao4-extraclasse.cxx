#include <stdio.h>

float somar(float a, float b) {
    return a + b;
}
float subtrair(float a, float b) {
    return a - b;
}
float multiplicar(float a, float b) {
    return a * b;
}
float dividir(float a, float b) {
    return a / b;
}
int main() {
    int opcao;           
    float num1, num2;    
    float resultado;

    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

//menu
    printf("Escolha a operação:");
    printf("1 - Somar\n");
    printf("2 - Subtrair\n");
    printf("3 - Multiplicar\n");
    printf("4 - Dividir\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            resultado = somar(num1, num2);
            printf("Resultado: %.2f", resultado);
            break;
        case 2:
            resultado = subtrair(num1, num2);
            printf("Resultado: %.2f", resultado);
            break;
        case 3:
            resultado = multiplicar(num1, num2);
            printf("Resultado: %.2f", resultado);
            break;
        case 4:
            if (num2 == 0) {
                printf("Erro: calculo inválido.");
            } else {
                resultado = dividir(num1, num2);
                printf("Resultado: %.2f", resultado);
            }
            break;
        default:
            printf("Erro: calculo inválido.");
    }

    return 0;
}