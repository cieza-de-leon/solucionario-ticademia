#include <stdio.h>
#include "funciones_auxiliares.h"


int ingreso_valido(int valor, int minimo, int maximo) {
    if(minimo <= valor && maximo >= valor) {
        return 1;
    }
    return 0;
}

int mostrar_advertencia() {
    printf("\x1b[35m        ____   ___  _    _   _  ____ ___ ___  _   _    _    ____  ___ ___\n");
    printf("\x1b[35m       / ___| / _ \\| |  | | | |/ ___|_ _/ _ \\| \\ | |  / \\  |  _ \\|_ _/ _ \\\n");
    printf("\x1b[35m       \\___ \\| | | | |  | | | | |    | | | | |  \\| | / _ \\ | |_) || | | | |\n");
    printf("\x1b[35m        ___) | |_| | |__| |_| | |___ | | |_| | |\\  |/ ___ \\|  _ < | | |_| |\n");
    printf("\x1b[35m       |_____ ___________\\___/ _____|________|___\\___/   __\\_| \\_\\___\\___/\n");
    printf("\x1b[36m             |_   _|_ _/ ___|  / \\  |  _ \\| ____|  \\/  |_ _|  / \\\n");
    printf("\x1b[36m               | |  | | |     / _ \\ | | | |  _| | |\\/| || |  / _ \\\n");
    printf("\x1b[36m               | |  | | |___ / ___ \\| |_| | |___| |  | || | / ___ \\\n");
    printf("\x1b[36m               |_| |___\\____/_/   \\_\\____/|_____|_|  |_|___/_/   \\_\\\n\n\n");
    printf("\x1b[31m           _____ ___ __  _   ___ __  _    ____  _ ___ __  _ _____ __\n");
    printf("\x1b[31m          |_   _| __|  \\| | | __|  \\| |  / _| || | __|  \\| |_   _/  \\\n");
    printf("\x1b[31m            | | | _|| | ' | | _|| | ' | | \\_| \\/ | _|| | ' | | || /\\ |\n");
    printf("\x1b[31m            |_| |___|_|\\__| |___|_|\\__|  \\__/\\__/|___|_|\\__| |_||_||_|\n\n");
    printf("\x1b[31m   Este solucionario no te enseñará a resolver los problemas planteados en la\n");
    printf("\x1b[31m   plataforma TICADEMIA. Úsalo con sabiduría, exclusivamente para saber si tu\n");
    printf("\x1b[31m   procedimiento está bien. Recuerda que al hacer trampa te la estás haciendo\n");
    printf("\x1b[31m   a ti mismo. ¡Muchos éxitos!\n\n\n\x1b[0m");
    return 0;
}
