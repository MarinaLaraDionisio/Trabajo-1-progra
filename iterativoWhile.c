#include<stdio.h>
#include"funciones.h"
/*extern float n; extern int p;*/
/*extern int citer;*/
void potenciaWhile(float n, int p, int c)
{
    float resultado = n;
    if(p<=0){
    printf("Esto no nos sirve\n");
    }
    else{
        while (p > 1)
        {
            resultado = resultado * n;
            p--;
            c++;
        }
        printf("El valor obtenido mediante el algoritmo iterativo es: %f\n", resultado);
        printf("Las iteraciones que hemos necesitado son: %d\n", c);
    }
 /*   return resultado;*/
}
