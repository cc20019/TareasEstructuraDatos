#include <stdio.h>
#include <stdlib.h>
#include "funcionTranspuesta.h"

int numeroFilas() {
    int filas;
    do {
        printf("Que cantidad de filas desea que tenga su matriz? (se le recuerda que deben ser en los rango de 5 hasta 15)\n-->");
        scanf("%i", &filas);
    } while (filas < 5 || filas > 15);

    return filas;
}

int numeroColumnas() {
    int columnas;
    do {
        printf("Que cantidad de columnas desea que tenga su matriz? (se le recuerda que deben ser en los rango de 5 hasta 15)\n-->");
        scanf("%i", &columnas);
    } while (columnas < 5 || columnas > 15);

    return columnas;
}

void llenarMatriz(int numeroFilas, int numeroColumnas, int matriz[][numeroColumnas]) {
    int fila, columna;

    for (fila = 0; fila < numeroFilas; fila++) {
        for (columna = 0; columna < numeroColumnas; columna++) {
            matriz[fila][columna] = (columna + 1);
        }
    }
}

void asignar(int numeroFilas, int numeroColumnas, int matriz[][numeroColumnas]) {

    int puestoFila, puestoColumna;
    do {
        printf("Que numero de fila desea?\n-->");
        scanf("%i", &puestoFila);
    } while (puestoFila < 1 || puestoFila > numeroFilas);

    do {
        printf("que numero de columna desea?\n-->");
        scanf("%i", &puestoColumna);
    } while (puestoColumna < 1 || puestoColumna > numeroColumnas);

    if (matriz[puestoFila - 1][puestoColumna - 1] == 0) {
        printf("Su puesto en la fila %i y la columna %i a sido cambiado con exito\n", puestoFila, puestoColumna);
        matriz[puestoFila - 1][puestoColumna - 1] = 1;
    } else {
        printf("Ups su puesto en la fila %i y la columna %i ya han sido vendido antes, escoja otra posicion\n", puestoFila, puestoColumna);
    }
}

void borrar(int numeroFilas, int numeroColumnas, int matriz[][numeroColumnas]) {
    int puestoFila, puestoColumna;
    do {
        printf("Que numero de fila desea borrar?\n-->");
        scanf("%i", &puestoFila);
    } while (puestoFila < 1 || puestoFila > numeroFilas);

    do {
        printf("que numero de columna desea borrar?\n-->");
        scanf("%i", &puestoColumna);
    } while (puestoColumna < 1 || puestoColumna > numeroColumnas);

    if (matriz[puestoFila - 1][puestoColumna - 1] == 1) {
        printf("Su asiento en el numero de fila %i y numero de columna %i han sido borrado con exito", puestoFila, puestoColumna);
        matriz[puestoFila - 1][puestoColumna - 1] = 0;
    } else {
        printf("Su asiento en el numero de fila %i y numero de columna %i nunca han sido vendidos", puestoFila, puestoColumna);
    }
}

void verMatriz(int numeroFilas, int numeroColumnas, int matriz[][numeroColumnas]) {
    int fila, columna;

    for (fila = 0; fila < numeroFilas; fila++) {
        for (columna = 0; columna < numeroColumnas; columna++) {
            printf("%i   ", matriz[fila][columna]);
        }
        printf("\n");
    }
}

void mostrarMatrizTranspuesta(int numeroFilas, int numeroColumnas, int matriz[][numeroColumnas]) {

    int fila, columna;
    for (columna = 0; columna < numeroColumnas; columna++) {
        for (fila = 0; fila < numeroFilas; fila++) {
            printf("%i   ", matriz[fila][columna]);
        }
        printf("\n");
    }
}

void matrizTranspuestaFuncion(int numeroFilas, int numeroColumnas, int matriz[][numeroColumnas], int matrizTranspuesta[][numeroFilas]) {

    int fila, columna;
    for (fila = 0; fila < numeroFilas; fila++) {
        for (columna = 0; columna < numeroColumnas; columna++) {
            matrizTranspuesta[columna][fila] = matriz[fila][columna];
        }
    }

    for (fila = 0; fila < numeroColumnas; fila++) {
        for (columna = 0; columna < numeroFilas; columna++) {
            printf("%i   ", matrizTranspuesta[fila][columna]);
        }
        printf("\n");
    }
}
