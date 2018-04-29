/*
 * Módulo:     1
 * Ejercicio:  2
 */
#include <stdio.h>
#include <stdlib.h>


int main() {
    int a, b;
    printf("Valor del ángulo \"a\": ");
    scanf("%d", &a);
    printf("Valor del ángulo \"b\": ");
    scanf("%d", &b);
    printf("Respuesta: \x1B[32m%d\x1B[0m\n", 180 - a - b);

    return 0;
}
