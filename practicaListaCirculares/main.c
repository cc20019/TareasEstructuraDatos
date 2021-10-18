#include "funcionesListasCirculares.h"
#include <stdio.h>
#include <stdlib.h>

int main() {

    int menu, cerrar = 0;

    do {
        printf("->MENU<-\n1. Para agregar\n2. Para desplegar lista\n3. Para buscar dato.\n4. Para modificar dato.\n5. Para eliminar Nodo\n0. Para cerrar\n->");
        scanf("%d", &menu);
        switch (menu) {
            case 1:
                insertarNodo();
                break;
            case 2:
                desplegarLista();
                break;
            case 3:
                buscarNodo();
                break;
            case 4:
                modificarNodo();
                break;
            case 5:
                eliminarNodo();
                break;
            case 0:
                cerrar = 1;
                break;
            default:
                printf("¡Ups!\nParace que la opcion del menu escrita no es valida\n");
                break;
        }
    } while (cerrar == 0);

    return 0;
}

