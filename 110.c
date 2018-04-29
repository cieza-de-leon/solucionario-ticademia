/*
 * Módulo:     1
 * Ejercicio: 10
 */
#include <stdio.h>
#include <stdlib.h>


int main() {
    int a, b;
    printf("Valor uno de los ángulos: ");
    scanf("%d", &a);
    printf("Valor del otro ángulo: ");
    scanf("%d", &b);
    printf("Respuesta: \x1B[32m%d\x1B[0m\n", 360 - a - b);

    return 0;
}
