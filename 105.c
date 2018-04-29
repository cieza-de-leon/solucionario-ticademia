/*
 * Módulo:     1
 * Ejercicio:  5
 */
#include <stdio.h>
#include <stdlib.h>


int main() {
    int x;
    printf("Valor del ángulo agudo dado: ");
    scanf("%d", &x);
    printf("Respuesta: \x1B[32m%d\x1B[0m\n", 90 - x);

    return 0;
}
