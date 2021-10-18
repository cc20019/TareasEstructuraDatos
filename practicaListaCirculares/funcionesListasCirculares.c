#include "funcionesListasCirculares.h"
#include <stdio.h>
#include <stdlib.h>

nodo* primero = NULL;
nodo* ultimo = NULL;

void insertarNodo() {
    nodo* nuevo = (nodo*) malloc(sizeof (nodo));
    printf("ingrese el dato a aguardar\n");
    scanf("%d", &nuevo->dato);

    if (primero == NULL) {
        primero = nuevo;
        primero->siguiente = NULL;
        ultimo = nuevo;
    } else {
        ultimo->siguiente = nuevo;
        nuevo->siguiente = primero;
        ultimo = nuevo;
    }
    printf("Dato ingresado con exito\n");
}

void desplegarLista() {
    nodo* actual = (nodo*) malloc(sizeof (nodo));
    actual = primero;
    if (primero != NULL) {
        printf("Sus datos son:\n");
        do {
            printf("%d\n", actual->dato);
            actual = actual->siguiente;
        } while (actual != primero);
    } else {
        printf("¡Ups!\nParace que la lista se encuentra vacia, no contiene datos aun.\n");
    }
}

void buscarNodo() {
    int nodoBuscado, nodoEncontrado = 0;
    nodo* actual = (nodo*) malloc(sizeof (nodo));
    actual = primero;
    printf("Que dato desea buscar en la lista\n->");
    scanf("%d", &nodoBuscado);
    if (primero != NULL) {
        do {
            if (actual->dato == nodoBuscado) {
                printf("Dato encontrado con exito [%d]\n", actual->dato);
                nodoEncontrado = 1;
            }
            actual = actual->siguiente;
        } while (actual != primero && nodoBuscado != 1);

        if (nodoEncontrado == 0) {
            printf("¡Ups!\nParace que el dato buscado no encontrado\n");
        }
    } else {
        printf("¡Ups!\nParace que la lista se encuentra vacia, no contiene datos aun.\n");
    }
}

void modificarNodo() {
    int nodoBuscado, nodoEncontrado = 0;
    nodo* actual = (nodo*) malloc(sizeof (nodo));
    actual = primero;
    printf("¿Que dato desea buscar en la lista para modificarlo?\n->");
    scanf("%d", &nodoBuscado);
    if (primero != NULL) {
        do {
            if (actual->dato == nodoBuscado) {
                printf("Dato encontrado con exito [%d]\n", actual->dato);
                printf("¿Que dato desea agregar para modificar el dato de la lista\n->");
                scanf("%d", &actual->dato);
                nodoEncontrado = 1;
                printf("Dato de la lista modificado con exito\n");
            }
            actual = actual->siguiente;
        } while (actual != primero && nodoBuscado != 1);

        if (nodoEncontrado == 0) {
            printf("¡Ups!\nParace que el dato buscado no encontrado\n");
        }
    } else {
        printf("¡Ups!\nParace que la lista se encuentra vacia, no contiene datos aun.\n");
    }
}

void eliminarNodo() {
    int nodoBuscado, nodoEncontrado = 0;
    nodo* actual = (nodo*) malloc(sizeof (nodo));
    nodo* anterior = (nodo*) malloc(sizeof (nodo));
    anterior = NULL;
    actual = primero;
    printf("Que dato desea buscar para eliminarlo\n->");
    scanf("%d", &nodoBuscado);
    if (primero != NULL) {
        do {
            if (actual->dato == nodoBuscado) {
                printf("dato encontrado\n");

                if (actual == primero) {
                    primero = primero->siguiente;
                    ultimo->siguiente = primero;
                } else if (actual == ultimo) {
                    anterior->siguiente = primero;
                    ultimo = anterior;
                } else {
                    anterior->siguiente = actual->siguiente;
                }
                printf("nodo eliminado con exito\n");
                nodoEncontrado = 1;
            }
            anterior = actual;
            actual = actual->siguiente;
        } while (actual != primero && nodoBuscado != 1);

        if (nodoEncontrado == 0) {
            printf("¡Ups!\nParace que el dato buscado no encontrado\n");
        } else {
            free(anterior);
        }
    } else {
        printf("¡Ups!\nParace que la lista se encuentra vacia, no contiene datos aun.\n");
    }
}