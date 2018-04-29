/*
 * Módulo:     1
 * Ejercicio: 14
 */
#include <stdio.h>
#include <stdlib.h>


int main() {
    int a, b;
    printf("Ubique los valores marcados con \x1b[35m?\x1B[0m en su imagen y llene.\n");
    printf("\"?x - \x1b[35m?\x1B[0m\": ");
    scanf("%d", &a);
    printf("\"3y - \x1b[35m?\x1B[0m\": ");
    scanf("%d", &b);
    printf("Respuestas:\n");
    printf("  x = \x1B[32m%d\x1B[0m\n", a);
    printf("  y = \x1B[32m%d\x1B[0m\n", 7 + b);

    return 0;
}
