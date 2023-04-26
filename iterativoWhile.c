#include<stdio.h>
#include"funciones.h"
float potenciaWhile(float numero, int potencia)
{
    long resultado = numero;
    while (potencia > 1)
    {
        resultado = resultado * numero;
        potencia--;
    }
    return resultado;
}

int main(){
  float x; int p;
  
  printf("Introduzca el valor del número que quiere elevar: ");
  scanf("%f", &x);
  
  printf("Introduzca el valor de la potenncia a la que quiere elevar: ");
  scanf("%d", &p);
  
  x=potenciaWhile(x, p);
  
  printf("El valor obtenido es: %f", x)
  
  return 0;
}
}
