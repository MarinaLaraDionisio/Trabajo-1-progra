#include<stdio.h>
#include"funciones.h"
/*extern float n; extern int p;*/
/*extern int citer;*/
void potenciaWhile(float numero, int potencia, int citer)
{
    float resultado = numero;
    if(potencia<=0){
    printf("Esto no nos sirve"); //esto es mentira eh 
    }
    while (potencia > 1)
    {
        resultado = resultado * numero;
        potencia--;
        citer++;
    }
    printf("El valor obtenido mediante el método iterativo es: %f\n", resultado);
    printf("Las iteraciones que hemos necesitado son: %d\n", citer);
 /*   return resultado;*/
}
