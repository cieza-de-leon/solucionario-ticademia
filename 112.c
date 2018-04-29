/*
 * Módulo:     1
 * Ejercicio: 12
 */
#include <stdio.h>
#include <stdlib.h>


int main() {
    int f_x, g_y;
    printf("Ubique los valores marcados con \x1b[35m?\x1B[0m en su imagen y llene.\n");
    printf("\"Y - \x1b[35m?\x1B[0mº\": ");
    scanf("%d", &g_y);
    printf("\"X + \x1b[35m?\x1B[0mº\": ");
    scanf("%d", &f_x);
    printf("Respuestas:\n");
    printf("  x = \x1B[32m%d\x1B[0m\n", 26 - f_x);
    printf("  y = \x1B[32m%d\x1B[0m\n", 42 + g_y);

    return 0;
}
