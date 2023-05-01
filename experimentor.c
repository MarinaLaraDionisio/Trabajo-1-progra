#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "funciones.h"
float n; int p;
int main(){
  int crecur;
  double tiempo;

  printf("Introduzca el valor que quiere elevar: ");
  scanf("%f", &n);

  printf("Introduzca el valor de la potencia a la que quiere elevar: ");
  scanf("%d", &p);
  time_t begin = time(NULL);
  n=potenciaRecursiva(n, p, &crecur);
  time_t end = time(NULL);
  tiempo= (double)(end - begin);
  printf("El valor obtenido mediante recursividad es: %f", n);

  return 0;
}

