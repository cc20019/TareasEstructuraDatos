#ifndef FUNCIONESCOLASHEADER_H
#define FUNCIONESCOLASHEADER_H

typedef int tipoDato;

typedef struct nodo {
    tipoDato dato;
    struct nodo* siguiente;
} nodo;

typedef struct {
    nodo *frente, *final;
} cola;


nodo* crearNodo(tipoDato dato);
void destruirNodo(nodo* nodo);

cola* crearCola();
void destruirCola(cola* Cola);

void agregarACola(cola* Cola, tipoDato entero);
tipoDato consultar(cola* Cola);

void eliminar(cola* Cola);
void desplegarCola(cola* Cola);



#endif /* FUNCIONESCOLASHEADER_H */

