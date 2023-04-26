#include<stdio.h>
#include"funciones.h"
float potenciaRecursiva(float numero, float potencia)
{
    if (potencia <= 0)
    {
        return 1;
    }
    else
    {
        return numero * potenciaRecursiva(numero, potencia - 1);
    }
}
