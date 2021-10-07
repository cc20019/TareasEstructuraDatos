#ifndef FUNCIONESCOLAS_H
#define FUNCIONESCOLAS_H

typedef struct nodo {
    int dato;
    struct nodo* siguiente;
} nodo;

void insertarNodo();
void desplegarCola();
void buscarNodo();
void modificarNodo();
void eliminarCola();


#endif /* FUNCIONESCOLAS_H */

