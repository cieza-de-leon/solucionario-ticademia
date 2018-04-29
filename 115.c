/*
 * Módulo:     1
 * Ejercicio: 15
 */
#include <stdio.h>
#include <stdlib.h>


int main() {
    float a;
    printf("Estatura del hombre: ");
    scanf("%f", &a);
    printf("Respuesta: \x1B[32m%.g\x1B[0m\n", 2 * a);

    return 0;
}
