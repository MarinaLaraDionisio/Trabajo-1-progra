#include<stdio.h>
#include"funciones.h"
unsigned int potenciaWhile(unsigned int n, unsigned int p, int *c)
{
    unsigned int resultado = n;/*creamos esta variable para poder realizar las sucesivas multiplicaciones en nuestra potencia.
    Con esto, además, podemos hacer que haga las veces de primera iteración, ahorrándonos una dentro del bucle, siendo así
    el proceso un poco más eficiente.*/
    while (p > 1)/*En este bucle vamos decrementando el parámetro que pasamos como exponente hasta que llegue a 1. Con esto nos
    aseguramos que haga el algoritmo en p-1 iteraciones.*/
    {
        resultado = resultado * n;
        *c=*c+1;
        p--;
    }
    return resultado;
}

