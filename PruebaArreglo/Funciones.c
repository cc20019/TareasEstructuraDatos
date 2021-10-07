
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "Funciones.h"

int vector2[], tamanio2,puesto, menu2;
bool entro = false;

int tamanio()
{
    do
    {
        printf("Cual es el tamaño que desea que tenga el vector (recuerda que solo es de 5 a 30)\n-->");
        scanf("%i", &tamanio2);
    } while (tamanio2 < 5 || tamanio2 > 30);
    return tamanio2;
    vector2[tamanio2];
}

int menu()
{
    printf("Menu de opciones\n1. Para asignar un puesto\n2. Para borrar un puesto\n3. Para mostrar posiciones\n0. Para salir\n-->");
    scanf("%i", &menu2);
    return menu2;
}

int asignarBorra(int tamanio2, int menu)
{
    
    switch (menu)
    {
    case 1:
        do
        {
            printf("\nQue puesto desea asignar el numero uno?-->");
            scanf("%i", &puesto);
        } while (puesto < 1 || puesto > tamanio2);

        if (vector2[(puesto - 1)] == 1)
        {
            printf("\nSorry su puesto %i ya esta asignado a alguien mas\n", puesto);
        }
        else
        {
            vector2[(puesto - 1)] = 1;
            printf("\nya se asigno su puesto %i ", puesto);
            return (puesto - 1);
        }
        break;
    case 2:
        do
        {
            printf("\nQue puesto desea borrar al arreglo (arrays)?-->");
            scanf("%i", &puesto);
        } while (puesto < 1 || puesto > tamanio2);

        if (vector2[(puesto - 1)] == 0)
        {
            printf("\nSorry su puesto %i nunca a sido asignado, crack", puesto);
        }
        else
        {
            vector2[(puesto - 1)] = 0;
            printf("\nya se borro su puesto %i en al arreglo (arrays) ", puesto);
            return (puesto - 1);
        }
        break;
    }
}