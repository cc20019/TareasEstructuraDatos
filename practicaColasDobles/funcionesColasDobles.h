#ifndef FUNCIONESCOLASDOBLES_H
#define FUNCIONESCOLASDOBLES_H

typedef struct nodo {
    int dato;
    struct nodo* siguiente;
} nodo;

void agregarPrimero();
void agregarUltimo();
void desplegar();
void eliminarInicio();
void eliminarFinal();

#endif /* FUNCIONESCOLASDOBLES_H */

