#include "funcionesPilas.h"
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {

    int menu, cerrar = 1, dato;
    pila* nuevo;
    pila* primerDato;
    pila* borrar;
    do {
        printf("->Menu<-\n1. Para asignar nuevo valor.\n2. Para mostrar pila.\n3. Para obtener el primero.\n4. Para borrar el primero\n0. Para cerrar programa.\n->");
        scanf("%d", &menu);
        switch (menu) {
            case 1:
                nuevo = (pila*) malloc(sizeof (nodo_pila));
                printf("Cual es el dato a agregar a la lista?\n->");
                scanf("%d", &dato);
                agregarPila(nuevo, dato);
                break;
            case 2:
                mostrarPila();
                break;
            case 3:
                primerDato = (pila*) malloc(sizeof (pila));
                dato = getPrimeroPila(primerDato);
                printf("El primer dato de nuestra pila es [%d]\n", dato);
                break;
            case 4:
                borrar = (pila*) malloc(sizeof (pila));
                pilaBorrar(borrar);
                break;
            case 0:
                cerrar = 0;
                break;
            default:
                printf("¡Ups!\nLo sentimos, parece que la opcion no es valida.\n");
                break;

        }
    } while (cerrar == 1);



    return 0;
}

