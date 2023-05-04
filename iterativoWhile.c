#include<stdio.h>
#include"funciones.h"
unsigned int potenciaWhile(unsigned int n, unsigned int p, int *c)
{
    unsigned int resultado = n;
    while (p > 1)
    {
        resultado = resultado * n;
        *c=*c+1;
        p--;
    }
    return resultado;
}

