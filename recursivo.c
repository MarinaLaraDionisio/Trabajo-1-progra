#include<stdio.h>
#include"funciones.h"
extern float x; extern int p;
float potenciaRecursiva(float numero, float potencia, int *crecur){
    *crecur++;
    if (potencia <= 0)
    {
        return 1;
    }
    else
    {
       // return numero * potenciaRecursiva(numero, potencia - 1);
        if(!potencia%2){
            return potenciaRecursiva(numero,potencia/2)*potenciaRecursiva(numero,potencia/2);
        }
        else{
            return potenciaRecursiva(numero,(potencia-1)/2)*potenciaRecursiva(numero,(potencia-1)/2)*numero;
        }
    }
}
