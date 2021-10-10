#include <stdio.h>
#include <stdlib.h>
#include "funcionesListasDobles.h"

nodo* primero = NULL;
nodo* ultimo = NULL;

void insertarNodo() {
    nodo* nuevo = (nodo*) malloc(sizeof (nodo));
    printf("Ingrese el dato que contendra el nuevo nodo\n");
    scanf("%d", &nuevo->dato);

    if (primero == NULL) {
        primero = nuevo;
        primero->siguiente = NULL;
        primero->atras = NULL;
        ultimo = primero;
    } else {
        ultimo->siguiente = nuevo;
        nuevo->siguiente = NULL;
        nuevo->atras = ultimo;
        ultimo = nuevo;
    }
    printf("nodo ingresado con exito\n");
}

void desplegarListaPU() {
    nodo* actual = (nodo*) malloc(sizeof (nodo));
    actual = primero;
    if (primero != NULL) {
        while (actual != NULL) {
            printf("%d\n", actual->dato);
            actual = actual->siguiente;
        }
    } else {
        printf("¡Ups!\nLa lista parece que se encuentra vacia\n");
    }

}

void desplegarListaUP() {
    nodo* actual = (nodo*) malloc(sizeof (nodo));
    actual = ultimo;
    if (primero != NULL) {
        while (actual != NULL) {
            printf("%d\n", actual->dato);
            actual = actual->atras;
        }
    } else {
        printf("¡Ups!\nLa lista parece que se encuentra vacia\n");
    }
}

void buscadoNodo() {
    int nodoBuscado, nodoEncontrado = 0;
    nodo* actual = (nodo*) malloc(sizeof (nodo));
    actual = primero;
    if (primero != NULL) {
        printf("Que dato desea buscar en la lista?\n->");
        scanf("%d", &nodoBuscado);
        while (actual != NULL && nodoEncontrado != 1) {
            if (actual->dato == nodoBuscado) {
                printf("Nodo encontrado con exito [%d]\n", actual->dato);
                nodoEncontrado = 1;
            }
            actual = actual->siguiente;
        }
        if (nodoEncontrado == 0) {
            printf("¡Ups!\nParace que el nodo buscado nunca fue encontrado\n");
        }
    } else {
        printf("¡Ups!\nLa lista parece que se encuentra vacia\n");
    }
}

void eliminarNodo() {
    int nodoBuscado, nodoEncontrado = 0;
    nodo* actual = (nodo*) malloc(sizeof (nodo));
    nodo* anterior = (nodo*) malloc(sizeof (nodo));
    actual = primero;
    anterior = NULL;

    if (primero != NULL) {
        printf("Que dato desea buscar para eliminar de la lista?\n->");
        scanf("%d", &nodoBuscado);
        while (actual != NULL && nodoEncontrado != 1) {
            if (actual->dato == nodoBuscado) {
                if (actual == primero) {
                    primero = primero->siguiente;
                    primero->atras = NULL;
                } else if (actual == ultimo) {
                    ultimo = ultimo->atras;
                    ultimo->siguiente = NULL;
                } else {
                    anterior->siguiente = actual->siguiente;
                    actual->siguiente->atras = anterior;
                }
                printf("Dato Eliminado con exito.\n");
                nodoEncontrado = 1;
            }
            anterior = actual;
            actual = actual->siguiente;
        }
        if (nodoEncontrado == 0) {
            printf("¡Ups!\nParace que el nodo buscado nunca fue encontrado\n");
        } else {
            free(anterior);
        }
    } else {
        printf("¡Ups!\nLa lista parece que se encuentra vacia\n");
    }
}