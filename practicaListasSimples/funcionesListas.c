#include <stdio.h>
#include <stdlib.h>
#include "funcionesListas.h"

nodo* primero = NULL;
nodo* ultimo = NULL;

void insertarNodo() {
    nodo* nuevo = (nodo*) malloc(sizeof (nodo));
    printf("incregre el dato que obtendra el nuevo nodo\n->");
    scanf("%d", &nuevo->dato);

    if (primero == NULL) {
        primero = nuevo;
        primero->siguiente = NULL;
        ultimo = nuevo;
    } else {
        ultimo->siguiente = nuevo;
        nuevo->siguiente = NULL;
        ultimo = nuevo;
    }
    printf("\nSe ha agregado nuevo dato a la lista con exito\n");
}

void desplegar() {
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

void buscar() {
    int datoBuscado, encontrado = 0;
    nodo* actual = (nodo*) malloc(sizeof (nodo));
    actual = primero;
    if (primero != NULL) {
        printf("Cual dato desea buscar en la lista");
        scanf("%d", &datoBuscado);
        while (actual != NULL && encontrado != 1) {
            if (actual->dato == datoBuscado) {
                printf("El nodo con el dato %d fue encontrado con exito.\n", actual->dato);
                encontrado = 1;
            }
            actual = actual->siguiente;
        }
        if (encontrado == 0) {
            printf("¡Ups!\nParace que el dato [%d] buscado no ha sido encontrado\n", datoBuscado);
        }
    } else {
        printf("¡Ups!\nLa lista parece que se encuentra vacia\n");
    }
}

void modificar() {
    int datoBuscado, encontrado = 0, nuevoDato;
    nodo* actual = (nodo*) malloc(sizeof (nodo));
    actual = primero;
    if (primero != NULL) {
        printf("Cual dato desea buscar en la lista");
        scanf("%d", &datoBuscado);
        while (actual != NULL && encontrado != 1) {
            if (actual->dato == datoBuscado) {
                printf("Ingrese el nuevo dato a asignar");
                scanf("%d", &nuevoDato);
                printf("El nodo con el dato [%d] fue encontrado y se modificar con el nuevo dato [%d]\n", actual->dato, nuevoDato);
                actual->dato = nuevoDato;
                encontrado = 1;
            }
            actual = actual->siguiente;
        }
        if (encontrado == 0) {
            printf("¡Ups!\nParace que el dato [%d] buscado no ha sido encontrado\n", datoBuscado);
        }
    } else {
        printf("¡Ups!\nLa lista parece que se encuentra vacia\n");
    }
}

void eliminarNodo() {
    int datoBuscado, encontrado = 0;
    nodo* actual = (nodo*) malloc(sizeof (nodo));
    nodo* anterior = (nodo*) malloc(sizeof (nodo));
    actual = primero;
    anterior = NULL;
    if (primero != NULL) {
        printf("Cual dato desea eliminar de la lista");
        scanf("%d", &datoBuscado);
        while (actual != NULL && encontrado != 1) {
            if (actual->dato == datoBuscado) {
                if (actual == primero) {
                    primero = primero->siguiente;
                } else if (actual == ultimo) {
                    anterior->siguiente = NULL;
                    ultimo = anterior;
                } else {
                    anterior->siguiente = actual->siguiente;
                }
                printf("Nodo eliminado con exito");
                encontrado = 1;

            }
            anterior = actual;
            actual = actual->siguiente;
        }
        if (encontrado == 0) {
            printf("¡Ups!\nParace que el dato [%d] buscado no ha sido encontrado\n", datoBuscado);
        } else {
            free(anterior);
        }
    } else {
        printf("¡Ups!\nLa lista parece que se encuentra vacia\n");
    }
}