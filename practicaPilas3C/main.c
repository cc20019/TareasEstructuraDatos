#include <stdio.h>
#include <stdlib.h>
#include "funcionesPilas3.h"
#define true 1 
#define false 0

int main(int argc, char** argv) {

    int menu, cerrar;

    do {
        cerrar = true;
        printf("Menu de opciones\n1. Para agregar fila\n2. Para mostrar datos\n3. Para buscar\n0. Para cerrar\n-->");
        scanf("%i", &menu);
        switch (menu) {
            case 1:
                printf("Opcion 1. Asignar nuevo dato\n");
                insertarNodo();
                break;
            case 2:
                desplegar();
                break;
            case 3:
                buscarNodo();
                break;
            case 4:
                break;
            case 5:
                break;
            case 0:
                cerrar = false;
                break;
            default:
                printf("Ups opcion del menu de valida. Porfavor intentelo de nuevo");
                break;
        }
    } while (cerrar == true);
    return 0;
}

