#include "funcionesColasHeader.h"
#include <stdio.h>
#include <stdlib.h>

int main() {
    int menu, cerrar = 0, dato;
    cola* nuevo = crearCola();
    do {
        printf("->MENU<-\n1. Para agregar datos.\n2. Para mostrar cola.\n3. Para consultar cabeza.\n4. Para eliminar primero.\n0. Para cerrar.\n-->");
        scanf("%d", &menu);
        switch (menu) {
            case 1:
                printf("Que datod desea agregar a la cola?\n->");
                scanf("%d", &dato);
                agregarACola(nuevo, dato);
                break;
            case 2:
                desplegarCola(nuevo);
                break;
            case 3:
                dato = consultar(nuevo);
                printf("El primero de su lista es %d\n", dato);
                break;
            case 4:
                dato = consultar(nuevo);
                eliminar(nuevo);
                printf("Se despacho con exito el primero [%d]\n", dato);
                break;
            case 0:
                cerrar = 1;
                break;
            default:
                printf("¡Ups!\nParece que la opcion del menu no es valida.\n");
                break;
        }
    } while (cerrar == 0);
    return 0;
}

