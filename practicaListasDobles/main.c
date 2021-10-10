#include <stdio.h>
#include <stdlib.h>
#include "funcionesListasDobles.h"
#define true 0
#define false 1

int main(int argc, char** argv) {
    int menu, cerrar = true;

    do {
        printf("->MENU<-\n1. Para agregar nuevo dato\n2. Para mostrar lista\n3. Para buscar dato\n4. Para eliminar dato\n0. Para cerrar\n->");
        scanf("%d", &menu);
        switch (menu) {
            case 1:
                insertarNodo();
                break;
            case 2:
                printf("Como desea ver la lista?\n1. Para ver del primero al ultimo\n2. Para ver del ultimo al primero\n->");
                scanf("%d", &menu);
                switch (menu) {
                    case 1:
                        desplegarListaPU();
                        break;
                    case 2:
                        desplegarListaUP();
                        break;
                    default:
                        printf("¡Ups!\nParece que la opcion escrita no es valida.\n");
                        break;
                }
                break;
            case 3:
                buscadoNodo();
                break;
            case 4:
                eliminarNodo();
                break;
                break;
            case 0:
                cerrar = false;
                break;
            default:
                printf("¡Ups!\nParece que la opcion escrita no es valida.\n");
                break;

        }
    } while (cerrar == true);

    printf("salio");
    return 0;
}

