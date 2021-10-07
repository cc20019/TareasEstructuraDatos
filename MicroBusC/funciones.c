#include <stdio.h>
#include "funciones.h"



int valorTamanio() {

    int tamanioVector;
    do {
        printf("dame el tamano de el vector (mayores a 5 y menores a 15)\n-->");
        scanf("%i", &tamanioVector);
    } while (tamanioVector > 15 || tamanioVector < 5);

    return tamanioVector;
}

int pedirNumero(int tamanio) {
    int numeroFila;
    do {
        printf("Que numero de fila desea (mayores a 1 y menores a %i)\n-->",tamanio);
        scanf("%i", &numeroFila);

    } while (numeroFila > tamanio || numeroFila < 1);
    return (numeroFila - 1);
}

void salir(){
    printf("Salio del todo. crack ");
}



