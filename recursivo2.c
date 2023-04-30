#include <stdio.h>
#include "funciones.h"

float potenciaRecursiva(float numero, int potencia, int *repeticiones)
{
    if (potencia <= 0)
    {
        return 1;
    }
    else
    {
        *repeticiones = *repeticiones++;
        return numero * potenciaRecursiva(numero, potencia - 1);
    }
}
