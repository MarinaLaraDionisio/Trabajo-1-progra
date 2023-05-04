#include<stdio.h>
#include"funciones.h"
unsigned int potenciaRecursiva(unsigned int numero,unsigned int potencia, int *contador){
*contador=*contador+1;
    if (potencia <= 1)
    {
        return numero;
    }
    else
    {
        unsigned int pot;

       // return numero * potenciaRecursiva(numero, potencia - 1);
        if(!(potencia%2)){
            pot=potenciaRecursiva(numero,potencia/2, contador);
            return pot*pot;
        }
        else{
            pot=potenciaRecursiva(numero,(potencia-1)/2, contador);
            return pot*pot*numero;
        }
    }
}

