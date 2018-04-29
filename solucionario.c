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
            switch (ejercicio) {
                case 1:
                    m1_e01();
                    goto modulo_1;
                case 2:
                    m1_e02();
                    goto modulo_1;
                case 3:
                    m1_e03();
                    goto modulo_1;
                case 4:
                    m1_e04();
                    goto modulo_1;
                case 5:
                    m1_e05();
                    goto modulo_1;
                case 6:
                    m1_e06();
                    goto modulo_1;
                case 7:
                    m1_e07();
                    goto modulo_1;
                case 8:
                    m1_e08();
                    goto modulo_1;
                case 9:
                    m1_e09();
                    goto modulo_1;
                case 10:
                    m1_e10();
                    goto modulo_1;
                case 11:
                    m1_e11();
                    goto modulo_1;
                case 12:
                    m1_e12();
                    goto modulo_1;
                case 13:
                    m1_e13();
                    goto modulo_1;
                case 14:
                    m1_e14();
                    goto modulo_1;
                case 15:
                    m1_e15();
                    goto modulo_1;
                case 16:
                    m1_e16();
                    goto modulo_1;
                default:
                    printf("\x1b[31mEl ejercicio %d del módulo %d aun no está disponible\x1b[0m\n", ejercicio, modulo);
                    goto modulo_1;
            }
        default:
            printf("\x1b[31mEl módulo %d aun no está disponible\x1b[0m\n", modulo);
            goto seleccionar_modulo;
    }

    return 0;
}
