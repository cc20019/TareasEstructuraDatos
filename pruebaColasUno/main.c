#include <stdio.h>
#include <stdlib.h>
#include "funcionesColas.h"
#define true 1
#define false 0

int main(int argc, char** argv) {
    int menu, cerrar = true;

    do {
        printf("\nMenu:\n1. Para agregar.\n2. Para buscar.\n3. Para mostrar.\n4. Para modificar.\n5. Para eliminar.\n0. Para cerrar\n-->");
        scanf("%d", &menu);
        switch (menu) {
            case 1:
                insertarNodo();
                break;
            case 2:
                buscarNodo();
                break;
            case 3:
                desplegarCola();
                break;
            case 4:
                modificarNodo();
                break;
            case 5:
                eliminarCola();
                break;
            case 0:
                cerrar = false;
                break;
            default:
                printf("Ups. Para que la opcion escrita no pertenece al menu\n");
                break;
        }
    } while (cerrar == true);

    return 0;
}

