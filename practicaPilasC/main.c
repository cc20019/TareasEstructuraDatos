#include <stdio.h>
#include <stdlib.h>
#include "funcionesPilas.h"

int main(int argc, char** argv) {

    elemento* uno = malloc(sizeof (elemento));
    elemento* dos = malloc(sizeof (elemento));
    elemento* tres = malloc(sizeof (elemento));
    elemento* cuatro = malloc(sizeof (elemento));

    uno->nombre = "aprende c en 24 horas";
    dos->nombre = "inferno";
    tres->nombre = "pardre rico padre pobre";
    cuatro->nombre = "hola mundo 2.0.com";

    agregarElemento(uno);
    agregarElemento(dos);
    agregarElemento(tres);
    agregarElemento(cuatro);

    elemento* i = extraer();

    while (i != NULL) {
        printf("%s\n", i->nombre);
        i = extraer();
    }

    return 0;

}

