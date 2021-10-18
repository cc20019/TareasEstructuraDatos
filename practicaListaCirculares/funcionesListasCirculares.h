#ifndef FUNCIONESLISTASCIRCULARES_H
#define FUNCIONESLISTASCIRCULARES_H

typedef struct nodo {
    int dato;
    struct nodo* siguiente;
} nodo;

void insertarNodo();
void desplegarLista();
void buscarNodo();
void modificarNodo();
void eliminarNodo();

#endif /* FUNCIONESLISTASCIRCULARES_H */

