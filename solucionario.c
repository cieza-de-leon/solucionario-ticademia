#include <stdio.h>
#include <stdlib.h>
#include "funciones_auxiliares.h"
#include "modulos/modulo_1.h"


int main() {
    int modulo, ejercicio;
    seleccionar_modulo:
    printf("Módulo a abrir [1-8] (o 0 para salir): ");
    scanf("%d", &modulo);
    if(0 == modulo) {
        return 0;
    }
    if(0 == ingreso_valido(modulo, 1, 8)) {
        printf("\x1b[31m%d no es un módulo válido\x1b[0m\n", modulo);
        goto seleccionar_modulo;
    }
    switch (modulo) {
        case 1:
            modulo_1:
            printf("\n== MÓDULO 1 ==\n");
            printf("Ejercicio a resolver [1-20] (o 0 para seleccionar otro módulo): ");
            scanf("%d", &ejercicio);
            if(0 == ejercicio) {
                goto seleccionar_modulo;
            }
            if(0 == ingreso_valido(ejercicio, 1, 20)) {
                printf("\x1b[31m%d no es un ejercicio válido\x1b[0m\n", ejercicio);
                goto modulo_1;
            }
            m1_indice(ejercicio);
            goto modulo_1;
        default:
            printf("\x1b[31mEl módulo %d aun no está disponible\x1b[0m\n", modulo);
            goto seleccionar_modulo;
    }
}
