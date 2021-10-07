#include <stdio.h>
#include <stdlib.h>
#include "funcionesColasDobles.h"
#define true 0
#define false 1

int main(int argc, char** argv) {

    int menu, cerrar = true;

    do {
        printf("\nMenu:\n1. Para agregar al inicio.\n2. Para agregar al final.\n3. Para mostrar.\n4. Para eliminar primero.\n5. Para eliminar ultimo.\n0. Para cerrar\n-->");
        scanf("%d", &menu);
        switch (menu) {
            case 1:
                agregarPrimero();
                break;
            case 2:
                agregarUltimo();
                break;
            case 3:
                desplegar();
                break;
            case 4:
                eliminarInicio();
                break;
            case 5:
                eliminarFinal();
                break;
            case 0:
                cerrar = false;
                break;
            default:
                printf("Ups. Para que la opcion escrita no pertenece al menu\n");
                break;
        }
    } while (cerrar == true);


    return (EXIT_SUCCESS);
}

