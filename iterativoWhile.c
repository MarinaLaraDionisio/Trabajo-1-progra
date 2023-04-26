#include<stdio.h>
#include"funciones.h"
extern float x; extern int p;
float potenciaWhile(float numero, int potencia, int *citer)
{
    long resultado = numero;
    if(potencia==0){
    return 1;
    }
    while (potencia > 1)
    {
        resultado = resultado * numero;
        potencia--;
        *citer++;
    }
    return resultado;
}
