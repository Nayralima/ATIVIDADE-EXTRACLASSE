#include <stdio.h>

int ano_bissexto(int ano);
int main() {
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano_bissexto(ano)) {
        printf("O ano %d é bissexto.", ano);
    } else {
        printf("O ano %d não é bissexto.", ano);
    }

    return 0;
}

int ano_bissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}