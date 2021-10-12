#include "funcionesPilas.h"
#include <stdio.h>
#include <stdlib.h>

pila* primero = NULL;

// primero = 6      nuevo = 6

// 6->5->null

void agregarPila(pila* nuevo, tipoElemento entero) {
    nuevo->dato = entero;
    nuevo->siguiente = primero;
    primero = nuevo;
    printf("Dato agregado con exito\n");
}

void mostrarPila() {
    pila* actual = (pila*) malloc(sizeof (pila));
    actual = primero;
    if (primero != NULL) {
        printf("Su datos son:\n");
        while (actual != NULL) {
            printf("%d\n", actual->dato);
            actual = actual->siguiente;
        }
    }
}

tipoElemento getPrimeroPila(pila* primeroDato) {
    if (primero != NULL) {
        primeroDato = primero;
        return primero->dato;
    }

}

void pilaBorrar(pila* borrarPrimero) {
    borrarPrimero = primero;
    if (primero != NULL) {
        printf("El dato a borrar es [%d]", primero->dato);
        primero = primero->siguiente;
        free(borrarPrimero);
    } else {
        printf("¡Ups!\nLo sentimos su pila esta vacia.\n");
    }


}

