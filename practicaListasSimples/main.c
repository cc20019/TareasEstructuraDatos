#include <stdio.h>
#include <stdlib.h>
#include "funcionesListas.h"
#define true 0
#define false 1

int main(int argc, char** argv) {

    int menu, cerrar = true;

    while (cerrar == true) {
        printf("-> MENU <-\n1. Para agregar dato\n2. Para mostrar lista\n3. Para buscar dato.\n4. Para modificar dato\n5. Para eliminar dato.\n0 Para cerrar programa\n->");
        scanf("%d", &menu);
        switch (menu) {
            case 1:
                insertarNodo();
                break;
            case 2:
                desplegar();
                break;
            case 3:
                buscar();
                break;
            case 4:
                modificar();
                break;
            case 5:
                eliminarNodo();
                break;
            case 0:
                cerrar = false;
                break;
            default:
                printf("¡Ups!\nParece que la opcion escrita para el menu no es valido\n.");
                break;
        }
    }


    return 0;
}

