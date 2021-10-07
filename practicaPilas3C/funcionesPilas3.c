#include <stdio.h>
#include <stdlib.h>
#include "funcionesPilas3.h"

nodo* primero = NULL;

void insertarNodo() {
    nodo* nuevo = (nodo*) malloc(sizeof (nodo));
    printf("Ingrese el dato que quiere que se le aguarde en su pila.\n-->");
    scanf("%d", &nuevo->dato);
    nuevo->siguiente = primero;
    primero = nuevo;
    printf("DATO ASIGNADO\n\n");
}

void desplegar() {
    nodo* actual = (nodo*) malloc(sizeof (nodo));
    actual = primero;
    if (primero != NULL) {
        printf("SUS DATOS SON:\n");
        while (actual != NULL) {
            printf("%d\n", actual->dato);
            actual = actual->siguiente;
        }
    } else {
        printf("Ups lo sentimos la pila parece que se encuentra vacia\n\n");
    }
}

void buscarNodo() {
    int datoBuscado, datoEncontrado;
    nodo* actual = (nodo*) malloc(sizeof (nodo));
    actual = primero;
    if (primero != NULL) {
        printf("Que dato desea buscar en la pila\n-->");
        scanf("%i", &datoBuscado);
        while (actual != NULL) {
            if (actual->dato == datoBuscado) {
                printf("Su dato [%d] buscado, encontrado con exito\n", actual->dato);
                datoEncontrado = 1;
            }
            actual = actual->siguiente;
        }
        if (datoEncontrado == 0) {
            printf("lo sentimos su dato no pertenece a esta pila\n");
        }
    } else {
        printf("Ups lo sentimos la pila parece que se encuentra vacia\n\n");
    }
}
