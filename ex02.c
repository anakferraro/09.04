#include <stdio.h>

void subtrai3 (int *numero, int *resultado) {
    *resultado = *numero - 3;
}

int main () {
    int numero;
    int resultado;
    
   printf("Digite um número: ", numero);
   
   numero = 7;
   
   printf ("%d\n", numero);
   printf ("Recebido %d\n", numero);
    
    subtrai3(&numero, &resultado);
    
    printf ("Resultado: %d\n", resultado);
    
    printf ("Atual: %d\n", numero);
    
    return 0;
}
    