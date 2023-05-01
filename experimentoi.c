#include <stdio.h>
#include <sys/time.h>
#include "funciones.h"
float num; int pot, citer, crecur;
int main(){
  /*int citer;*/
  struct timeval ini, fin;
  double tiempo;
  printf("Introduzca el valor del numero que quiere elevar: ");
  scanf("%f", &num);

  printf("Introduzca el valor de la potenncia a la que quiere elevar: ");
  scanf("%d", &pot);
  getchar();
  gettimeofday(&ini, NULL); //Inicio de la ejecución
  potenciaWhile(num, pot, citer);
  gettimeofday(&fin, NULL);
  tiempo=((fin.tv_sec-ini.tv_sec)*1000+(fin.tv_usec-ini.tv_usec)/1000.0)/1000;
  printf("El tiempo empleado en el algoritmo iterativo es %lf", tiempo);
  /*num=potenciaRecursiva(num, pot, &crecur);
  printf("El valor obtenido mediante el método recursivo es: %f\n", num);
  printf("Las iteraciones que hemos necesitado son: %d\n", crecur);*/
  return 0;
}
