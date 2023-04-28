#include<stdio.h>
float x; int p;
int main(){
  int crecur;
  double tiempo;
  
  printf("Introduzca el valor del número que quiere elevar: ");
  scanf("%f", &x);
  
  printf("Introduzca el valor de la potenncia a la que quiere elevar: ");
  scanf("%d", &p);
  clock_t begin = clock();
  x=potenciaRecursiva(x, p, &crecur);
  clock_t end = clock();
  tiempo= (double)(end - begin) / CLOCKS_PER_SEC;
  printf("El valor obtenido mediante el método iterativo es: %f", x);
  
  return 0;
}
