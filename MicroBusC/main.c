#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

int main()
{

    int tamanio, fila, menuOpciones, cerrar, posicionFila, borrarFila;
    tamanio = valorTamanio();
    int vector[tamanio];

    for (fila = 0; fila < tamanio; fila++)
    {
        vector[fila] = 0;
    }

    do
    {
        printf("Menu de opciones\n1. para asignar un puesto\n2. para borrar un valor\n3. para reiniciar\n4. ver\0. para salir");
        scanf("%i", &menuOpciones);
        switch (menuOpciones)
        {
        case 1:                      
            posicionFila = pedirNumero(tamanio);
            if (vector[posicionFila] == 0)
            {
                vector[posicionFila] = 1;
                printf("Puesto asigando con exito, la posicion %i tomara el valor de 1\n", posicionFila);
            }
            else
            {
                printf("¡Ups! Este puesto ya se encuentra asignado\n");
            }
            break;
        case 2:
            borrarFila = pedirNumero(tamanio);
            if (vector[borrarFila] == 1)
            {
                vector[borrarFila] = 0;
                printf("Puesto borrado con exito, la posicion %i tomara el valor de 0\n", posicionFila);
            }
            else
            {
                printf("¡Ups! Este puesto nunca a sido asignado");
            }
            break;
        case 3:
            for (fila = 0; fila < tamanio; fila++)
            {
                vector[fila] = 0;
            }
            break;
        case 4:
            printf("El vector es: \n");
            for (fila = 0; fila < tamanio; fila++)
            {
                printf("#%i -->%i\n", (fila + 1), vector[fila]);
            }
            break;
        case 0:
            cerrar = 0;
            break;
        default:
            printf("¡Ups! Creo que tenemos un problema opcion de menu no valida.\n");
            break;
        }

    } while (cerrar != 0);

    salir();

    return 0;
}
