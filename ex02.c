#include <stdio.h>

int subtrai3(int numero) {
    return numero - 3;
}

int main() {
    int numero = 7;

    printf("digite um numero: %d\n", numero);

    printf("recebido: %d\n", numero);

    int resultado = subtrai3(numero);

    printf("resultado: %d\n", resultado);
    printf("atual: %d\n", numero);

    return 0;
}
    