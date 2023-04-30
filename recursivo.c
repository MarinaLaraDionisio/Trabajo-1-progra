#include<stdio.h>
#include"funciones.h"
/*extern float n; extern int p;*/
float potenciaRecursiva(float numero, int potencia, int *crecur){
    *crecur=*crecur+1;
    if (potencia <= 0)
    {
        return 1;
    }
    else
    {
       // return numero * potenciaRecursiva(numero, potencia - 1);
        if(!(potencia%2)){
            return potenciaRecursiva(numero,potencia/2, *crecur)*potenciaRecursiva(numero,potencia/2, *crecur);
        }
        else{
            return potenciaRecursiva(numero,(potencia-1)/2, *crecur)*potenciaRecursiva(numero,(potencia-1)/2, *crecur)*numero;
        }
    }
}
