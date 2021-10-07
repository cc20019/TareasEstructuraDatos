#ifndef FUNCIONESLISTAS_H
#define FUNCIONESLISTAS_H

typedef struct nodo {
    int dato;
    struct nodo* siguiente;
} nodo;

void insertarNodo();
void desplegar();
void buscar();
void modificar();
void eliminarNodo();


#endif /* FUNCIONESLISTAS_H */

