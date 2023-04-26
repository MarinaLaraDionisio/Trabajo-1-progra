#include<stdio.h>
#include"funciones.h"
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
