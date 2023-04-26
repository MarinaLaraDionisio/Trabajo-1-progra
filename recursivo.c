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

int main(){
  float x; int p;
  
  printf("Introduzca el valor del número que quiere elevar: ");
  scanf("%f", &x);
  
  printf("Introduzca el valor de la potenncia a la que quiere elevar: ");
  scanf("%d", &p);
  
  x=potenciaRecursiva(x, p);
  
  printf("El valor obtenido es: %f", x)
  
  return 0;
}
