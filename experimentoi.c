#include <stdio.h>
#include <time.h>
#include "funciones.h"
float n; int p, citer, crecur;
int main(){
  /*int citer;*/
  printf("Introduzca el valor del número que quiere elevar: ");
  scanf("%f", &n);

  printf("Introduzca el valor de la potenncia a la que quiere elevar: ");
  scanf("%d", &p);
  time_t begin = time(NULL);
  potenciaWhile(n, p, citer);
  time_t end = time(NULL);
  /*printf("El valor obtenido mediante el método iterativo es: %f\n", n);
  printf("Las iteraciones que hemos necesitado son: %d\n", citer);*/
  printf("El tiempo empleado en el algoritmo iterativo es %d", (end - begin));
  n=potenciaRecursiva(n, p, &crecur);
printf("El valor obtenido mediante el método recursivo es: %f\n", n);
  printf("Las iteraciones que hemos necesitado son: %d\n", citer);
  return 0;
}
