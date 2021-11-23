#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main(int argc, char** argv) {

    Nodo* arbol = NULL;

    preOrden(arbol);
    printf("\n");
    insertar(&arbol, 5);
    postOrden(arbol);
    printf("\n");
    insertar(&(arbol), 10);
    postOrden(arbol);
    printf("\n");
    insertar(&arbol, 4);
    postOrden(arbol);
    printf("\n");
    insertar(&arbol, 9);
    postOrden(arbol);
    printf("\n");
    insertar(&arbol, 15);
    postOrden(arbol);
    printf("\n");

    determinarExistencia(arbol, 10);
    determinarExistencia(arbol, 3);
    determinarExistencia(arbol, 9);

    return 0;
}

