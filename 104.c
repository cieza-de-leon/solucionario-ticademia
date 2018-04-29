/*
 * Módulo:     1
 * Ejercicio:  4
 */
#include <stdio.h>
#include <stdlib.h>


int main() {
    int a;
    printf("Valor del ángulo \"a\": ");
    scanf("%d", &a);
    printf("Respuesta: \x1B[32m%d\x1B[0m\n", 180 - a);

    return 0;
}
