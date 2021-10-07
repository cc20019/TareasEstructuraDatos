#include <stdio.h>
#include <stdlib.h>
#include "Funciones.h"


int main() {

    int cerrar, tamanio3, Menu, posicion;
    tamanio3 = tamanio();
    int vector[tamanio3];

    do {
        Menu = menu();
        switch (Menu) {
            case 1:
                posicion=asignarBorra(tamanio3, Menu);
                vector[posicion] = 1;
                break;
            case 2:
                vector[asignarBorra(tamanio3, Menu)] = 0;
                break;
            case 3:
                for (int fila = 0; fila < tamanio3; fila++) {
                    printf("#%i --> %i\n", (fila + 1), vector[fila]);
                }
                break;
            case 0:
                cerrar = 0;
                break;
            default:
                printf("Ups. opcion del menu no valida");
                break;

        }
    } while (cerrar != 0);
    printf("Salio");
    return 0;
}

