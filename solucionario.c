/***
 *      ____   ___  _    _   _  ____ ___ ___  _   _    _    ____  ___ ___
 *     / ___| / _ \| |  | | | |/ ___|_ _/ _ \| \ | |  / \  |  _ \|_ _/ _ \
 *     \___ \| | | | |  | | | | |    | | | | |  \| | / _ \ | |_) || | | | |
 *      ___) | |_| | |__| |_| | |___ | | |_| | |\  |/ ___ \|  _ < | | |_| |
 *     |_____ ___________\___/ _____|________|___\___/   __\_| \_\___\___/
 *           |_   _|_ _/ ___|  / \  |  _ \| ____|  \/  |_ _|  / \
 *             | |  | | |     / _ \ | | | |  _| | |\/| || |  / _ \
 *             | |  | | |___ / ___ \| |_| | |___| |  | || | / ___ \
 *             |_| |___\____/_/   \_\____/|_____|_|  |_|___/_/   \_\
 *
 *         _____ ___ __  _   ___ __  _    ____  _ ___ __  _ _____ __
 *        |_   _| __|  \| | | __|  \| |  / _| || | __|  \| |_   _/  \
 *          | | | _|| | ' | | _|| | ' | | \_| \/ | _|| | ' | | || /\ |
 *          |_| |___|_|\__| |___|_|\__|  \__/\__/|___|_|\__| |_||_||_|
 *
 * Este solucionario no te enseñará a resolver los problemas planteados en la
 * plataforma TICADEMIA. Úsalo con sabiduría, exclusivamente para saber si tu
 * procedimiento está bien. Recuerda que al hacer trampa te la estás haciendo
 * a ti mismo. ¡Muchos éxitos!
 */


#include <stdio.h>
#include <stdlib.h>
#include "funciones_auxiliares.h"
#include "modulos/modulo_1.h"


int main() {
    mostrar_advertencia();
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
