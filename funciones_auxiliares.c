#include "funciones_auxiliares.h"


int ingreso_valido(int valor, int minimo, int maximo) {
    if(minimo <= valor && maximo >= valor) {
        return 1;
    }
    return 0;
}